%% Analysis of the circuit of the pressure sensor
%  Author: Julien Biral, Master's Thesis at CNMAT, UC Berkeley
%  Date: 05-11-2014
%  
%  ========================================================================
%  DESCRIPTION:
%  

%% DC Analysis of the sensor circuit
%  This analysis is done to maximize the dynamic of the circuit. In DC, the
%  capacitor C can be replaced by an open-circuit. Maximizing dynamics is
%  thus achieved by choosing the adequate value of the resistor R.
%  Special trick: this analysis uses the star-delta transform to simplify
%  the circuit.

% Clear the workspace of unwated elements
close all;
clear all;
clc;

% =========================== %
% Initialization of variables %
% =========================== %

% Number of points to compute:
N = 10000;

% Power Voltage of the circuit:
% Set to 1 to normalize the value computed during the analysis.
Vd = 3.3;

% Boundaries of the variable resistor:
RvL = 8e3;
RvH = 5e6;

% Variable resistor array:
% Only the minimum and the maximum values are considered here as the aim is
% to maximize the dynamic of the circuit. Intermediate values are not
% useful for this purpose.
R1 = [RvL, RvH];
R2 = R1;
R3 = R1;
R4 = R1;

% Resistor sweep:
% The sweep is done to calculte the R value which gives the best dynamic
R = 1e5/N : 1e5/N : 1e5;

% Computation of the operating points of the circuit
for i = 1:length(R1)
    
    for j = 1:length(R)
        
        % Kennelly's Star-Delta Transformation:
        Rab = ( R2(i)*R3(i) + R(j)*(R2(i)+R3(i)) ) / R(j);
        Rbc = ( R2(i)*R3(i) + R(j)*(R2(i)+R3(i)) ) / R2(i);
        Rac = ( R2(i)*R3(i) + R(j)*(R2(i)+R3(i)) ) / R3(i);
        
        % Kennelly's Delta-Star Transformation:
        Rat = ( Rab * R(j) ) / ( Rab + 2*R(j) );
        Rbt = Rat;
        Rdt = ( R(j)^2 ) / ( Rab + 2*R(j) );
        
        % Bottom parralel resistors:
        Rp1 = ( Rat * (R(j) + R1(i) + Rac) + Rac * (R(j) + R1(i)) ) ...
            / (R(j) + R1(i) + Rac);
        Rp2 = ( Rbt * (R(j) + R4(i) + Rbc) + Rbc * (R(j) + R4(i)) ) ...
            / (R(j) + R4(i) + Rbc);
        
        % Equivalent resistor of the circuit:
        Rtot = ( Rdt * (Rp1 + Rp2) + Rp1*Rp2 ) / (Rp1 + Rp2);
        
        % Currents:
        Idt = Vd / Rtot;
        Ita = Rp2 / (Rp1 + Rp2) * Idt;
        Itb = Rp1 / (Rp1 + Rp2) * Idt;
        I1  = Rac / (R(j) + R1(i) + Rac) * Ita;
        I4  = Rbc / (R(j) + R4(i) + Rbc) * Itb;
        
        % Output voltages:
        V0(i,j) =  R(j) * I1;
        V1(i,j) = (R(j) + R1(i)) * I1;
        V3(i,j) = (R(j) + R4(i)) * I4;
        V4(i,j) =  R(j) * I4;
        V2(i,j) =  R(j) * (V1(i,j)*R3(i) + V3(i,j)*R2(i)) ...
            / (R2(i)*R3(i) + R(j)*R2(i) + R(j) + R3(i));
    end
    
end

% Plot of the output voltages and computation of maximum dynamics points:
figure;

% V0
subplot(3, 1, 1);
plot(R, V0(1,:), '-r');
hold on;
plot(R, V0(2,:), '-b');
[~, ind] = max( abs(V0(1,:) - V0(2,:)) );
line([R(ind), R(ind)], ...
    [min(V0(1,ind), V0(2,ind)), max(V0(1,ind), V0(2,ind))], ...
    'LineStyle', '-.', 'LineWidth', 2, 'Color', [0.4, 0.8, 0.4]);
hold off;
fprintf('V0 - Max dynamic for R = %i\n', R(ind));


% V1
subplot(3, 1, 2);
plot(R, V1(1,:), '-r');
hold on;
plot(R, V1(2,:), '-b');
[~, ind] = max( abs(V1(1,:) - V1(2,:)) );
line([R(ind), R(ind)], ...
    [min(V1(1,ind), V1(2,ind)), max(V1(1,ind), V1(2,ind))], ...
    'LineStyle', '-.', 'LineWidth', 2, 'Color', [0.4, 0.8, 0.4]);
hold off;
fprintf('V1 - Max dynamic for R = %i\n', R(ind));


% V2
subplot(3, 1, 3);
plot(R, V2(1,:), '-r');
hold on;
plot(R, V2(2,:), '-b');
[~, ind] = max( abs(V2(1,:) - V2(2,:)) );
line([R(ind), R(ind)], ...
    [min(V2(1,ind), V2(2,ind)), max(V2(1,ind), V2(2,ind))], ...
    'LineStyle', '-.', 'LineWidth', 2, 'Color', [0.4, 0.8, 0.4]);
hold off;
fprintf('V2 - Max dynamic for R = %i\n', R(ind));