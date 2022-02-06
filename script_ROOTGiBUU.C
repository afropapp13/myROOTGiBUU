{
	gROOT->ProcessLine(".L ../myClasses/STV_Tools.cxx+");
	gROOT->ProcessLine(".L ../myClasses/Tools.cxx+");	

	gROOT->ProcessLine(".L RootTuple.C+");
	gROOT->ProcessLine("RootTuple().Loop()");

};
