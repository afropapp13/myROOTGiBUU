{

	vector<TString> WhichSample; vector<TString> WhichName;

	//----------------------------------------//

	WhichSample.push_back("GiBUU_argon40_CCinclMEC_BNBFlux"); WhichName.push_back("GiBUU");
	WhichSample.push_back("GiBUU_argon40_CCinclMEC_BNBFlux_NoFSI"); WhichName.push_back("GiBUUNoFSI");
	WhichSample.push_back("GiBUU_argon40_CCinclMEC_BNBFlux_Tscaling"); WhichName.push_back("GiBUUTscaling");	

	//----------------------------------------//

	gROOT->ProcessLine(".L ../myClasses/Util.C+");
	gROOT->ProcessLine(".L ../myClasses/STV_Tools.cxx+");
	gROOT->ProcessLine(".L ../myClasses/Tools.cxx+");	

	gROOT->ProcessLine(".L RootTuple.C+");

	for (int i =0;i < (int)(WhichSample.size()); i++) {

		gROOT->ProcessLine("RootTuple(\""+WhichSample[i]+"\",\""+WhichName[i]+"\").Loop()");

	}
	//gROOT->ProcessLine(".q");
};
