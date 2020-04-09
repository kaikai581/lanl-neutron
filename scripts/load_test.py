#!/usr/bin/env python

# Ref: https://root-forum.cern.ch/t/wrapping-root-classes-for-python/21845/2
# Load the library and include the header file
from ROOT import gInterpreter, gSystem
gInterpreter.ProcessLine('#include "../include/classes.h"')
gSystem.Load('../lib/libBabyMINDUnpack')

# Try loading an existing file
import ROOT
infpn = '/cshare/vol2/users/shihkai/sample_code/siva/data_file/1September_16_MCR0_muons_2Gev_0pt2T_4trigg_0deg___NewStructure.root'
tinf = ROOT.TFile.Open(infpn)
tr_all = tinf.AllEvents # AllEvents is the tree name.
# tr_all.Draw('fdEdz') # Then I can draw histograms of variables.

for entry in tr_all: # Or loop through variables.
    # Regarding how to iterate a tree, the method is from here: https://root-forum.cern.ch/t/reading-a-ttree-branch-using-pyroot/29019
    # print(entry.Event.GetNHits())
    for hit in entry.Event.GetHits():
        print(hit.GetView(), hit.GetRE(), hit.GetX(), hit.GetY(), hit.GetZ())

    break


# input('Press enter to continue.') # In python 3 raw_input is renamed to input.