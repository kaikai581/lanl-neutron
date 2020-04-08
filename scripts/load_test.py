#!/usr/bin/env python

# Ref: https://root-forum.cern.ch/t/wrapping-root-classes-for-python/21845/2
# Load the library and include the header file
from ROOT import gInterpreter, gSystem
gInterpreter.ProcessLine('#include "../include/classes.h"')
gSystem.Load('../lib/libNewStructure')

# then you can starting the fastjet class directly....
# from ROOT import fastjet
# jet = fastjet.PseudoJet( 99.0, 0.1, 0, 100.0)
# print jet.E()