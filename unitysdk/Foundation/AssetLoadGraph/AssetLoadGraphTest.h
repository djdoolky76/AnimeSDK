#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphHandle.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadNodeToken_1.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace Foundation::AssetLoadGraph { class AssetLoadGraph; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE10_FAILUREHANDLING_OFFSET UNITYSDK_OFFSET(0x1F371C80)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE11_HANDLEQUERIES_OFFSET UNITYSDK_OFFSET(0x1F372420)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE12_LIFECYCLE_OFFSET UNITYSDK_OFFSET(0x1F372770)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE13_REUSEDTEMPLATEWAITFORCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F372DE0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE1_SINGLEASSET_OFFSET UNITYSDK_OFFSET(0x1F36FC20)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE2_CHAINWITHLAMBDA_OFFSET UNITYSDK_OFFSET(0x1F36FE40)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE3_DAGDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1F370080)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE4_LOADASSETS_OFFSET UNITYSDK_OFFSET(0x1F370910)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE5_THEN_OFFSET UNITYSDK_OFFSET(0x1F370CA0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE6_DYNAMICLOADANDLETASYNC_OFFSET UNITYSDK_OFFSET(0x1F370F50)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE7_THENDYNAMICBRANCHWAIT_OFFSET UNITYSDK_OFFSET(0x1F371420)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE8_CAPTURENAMEDANDFINDTOKEN_OFFSET UNITYSDK_OFFSET(0x1F371720)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE9_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1F3719D0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CREATEBADPATH_OFFSET UNITYSDK_OFFSET(0x1F3737D0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_FIRSTORFALLBACK_OFFSET UNITYSDK_OFFSET(0x1F374020)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_LOGRESULT_OFFSET UNITYSDK_OFFSET(0x1F372D90)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_NORMALIZECHILDPATHS_OFFSET UNITYSDK_OFFSET(0x1F370BB0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNALLTEXTASSETTESTS_OFFSET UNITYSDK_OFFSET(0x1F373380)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNCANCEL_OFFSET UNITYSDK_OFFSET(0x1F372810)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNDISPOSE_OFFSET UNITYSDK_OFFSET(0x1F3729F0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNFAILFAST_OFFSET UNITYSDK_OFFSET(0x1F371D50)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNFAILUREKEEPSLOADED_OFFSET UNITYSDK_OFFSET(0x1F372010)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNLOADASSETSFAILFAST_OFFSET UNITYSDK_OFFSET(0x1F372220)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNRESET_OFFSET UNITYSDK_OFFSET(0x1F372BD0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNTEMPLATEONCEWITHWAIT_OFFSET UNITYSDK_OFFSET(0x1F373240)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTCANCELTEXTASSET_OFFSET UNITYSDK_OFFSET(0x1F373C50)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTCHAINASYNC_OFFSET UNITYSDK_OFFSET(0x1F374760)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTCHAINWITHCACHEDFUNC_OFFSET UNITYSDK_OFFSET(0x1F373980)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTCHAINWITHLAMBDA_OFFSET UNITYSDK_OFFSET(0x1F373900)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTDAGASYNC_OFFSET UNITYSDK_OFFSET(0x1F3747E0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTDAGTEXTASSET_OFFSET UNITYSDK_OFFSET(0x1F373A00)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTDISPOSETEXTASSET_OFFSET UNITYSDK_OFFSET(0x1F373CB0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTDYNAMICCHILDRENASYNC_OFFSET UNITYSDK_OFFSET(0x1F374950)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTDYNAMICCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F373F10)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTFAILFASTASYNC_OFFSET UNITYSDK_OFFSET(0x1F3748D0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTFAILFAST_OFFSET UNITYSDK_OFFSET(0x1F373D10)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTFAILUREKEEPLOADED_OFFSET UNITYSDK_OFFSET(0x1F373E10)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTFAILUREUNLOADALL_OFFSET UNITYSDK_OFFSET(0x1F373D90)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTFREENODEANDFINDTOKEN_OFFSET UNITYSDK_OFFSET(0x1F3740B0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTLOADASSETSFAILFAST_OFFSET UNITYSDK_OFFSET(0x1F373E90)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTLOADMANYWITHLAMBDA_OFFSET UNITYSDK_OFFSET(0x1F373B70)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTLOADMANYWITHSTATICPATHS_OFFSET UNITYSDK_OFFSET(0x1F373BE0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTRESET_OFFSET UNITYSDK_OFFSET(0x1F374600)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTREUSEDTEMPLATEWAITFORCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F374680)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTSINGLEASYNC_OFFSET UNITYSDK_OFFSET(0x1F374700)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTSINGLETEXTASSET_OFFSET UNITYSDK_OFFSET(0x1F3738A0)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTSUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1F374580)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTTHENCHAIN_OFFSET UNITYSDK_OFFSET(0x1F374450)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTTHENSPAWNBRANCHWITHASSETS_OFFSET UNITYSDK_OFFSET(0x1F374240)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTTHENSPAWNBRANCH_OFFSET UNITYSDK_OFFSET(0x1F374130)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTTHENSYNC_OFFSET UNITYSDK_OFFSET(0x1F374350)
#define FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_VERIFYTEXTASSETLIST_OFFSET UNITYSDK_OFFSET(0x1F374A60)

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphTest_TypeDefinitionIndex = 8201;

	class AssetLoadGraphTest : public ::System::Object
	{
	public:
		// static const ::System::String* BadPathString; // 0x0

		static ::System::Void Case1_SingleAsset(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE1_SINGLEASSET_OFFSET))(path);
		}

		static ::System::Void Case2_ChainWithLambda(::Foundation::AssetPath firstPath, ::Foundation::AssetPath secondPath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE2_CHAINWITHLAMBDA_OFFSET))(firstPath, secondPath);
		}

		static ::System::Void Case3_DagDependencies(::Foundation::AssetPath aPath, ::Foundation::AssetPath bPath, ::Foundation::AssetPath cPath, ::Foundation::AssetPath dPath, ::Foundation::AssetPath ePath, ::Foundation::AssetPath gPath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE3_DAGDEPENDENCIES_OFFSET))(aPath, bPath, cPath, dPath, ePath, gPath);
		}

		static ::System::Void Case4_LoadAssets(::Foundation::AssetPath rootPath, ::Il2CppArray<::Foundation::AssetPath>* childPaths)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE4_LOADASSETS_OFFSET))(rootPath, childPaths);
		}

		static ::System::Void Case5_Then(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE5_THEN_OFFSET))(path);
		}

		static ::System::Void Case6_DynamicLoadAndLetAsync(::Foundation::AssetPath rootPath, ::Il2CppArray<::Foundation::AssetPath>* childPaths, ::Foundation::AssetPath subPath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE6_DYNAMICLOADANDLETASYNC_OFFSET))(rootPath, childPaths, subPath);
		}

		static ::System::Void Case7_ThenDynamicBranchWait(::Foundation::AssetPath rootPath, ::Il2CppArray<::Foundation::AssetPath>* thenPaths, ::Foundation::AssetPath subPath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE7_THENDYNAMICBRANCHWAIT_OFFSET))(rootPath, thenPaths, subPath);
		}

		static ::System::Void Case8_CaptureNamedAndFindToken(::Foundation::AssetPath mainPath, ::Foundation::AssetPath freePath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE8_CAPTURENAMEDANDFINDTOKEN_OFFSET))(mainPath, freePath);
		}

		static ::System::Void Case9_SubGraph(::Foundation::AssetPath mainPath, ::Foundation::AssetPath subPath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE9_SUBGRAPH_OFFSET))(mainPath, subPath);
		}

		static ::System::Void Case10_FailureHandling(::Foundation::AssetPath goodPath, ::Foundation::AssetPath badPath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE10_FAILUREHANDLING_OFFSET))(goodPath, badPath);
		}

		static ::System::Void RunFailFast(::Foundation::AssetPath goodPath, ::Foundation::AssetPath badPath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNFAILFAST_OFFSET))(goodPath, badPath);
		}

		static ::System::Void RunFailureKeepsLoaded(::Foundation::AssetPath goodPath, ::Foundation::AssetPath badPath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNFAILUREKEEPSLOADED_OFFSET))(goodPath, badPath);
		}

		static ::System::Void RunLoadAssetsFailFast(::Foundation::AssetPath goodPath, ::Foundation::AssetPath badPath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNLOADASSETSFAILFAST_OFFSET))(goodPath, badPath);
		}

		static ::System::Void Case11_HandleQueries(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE11_HANDLEQUERIES_OFFSET))(path);
		}

		static ::System::Void Case12_Lifecycle(::Foundation::AssetPath firstPath, ::Foundation::AssetPath secondPath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE12_LIFECYCLE_OFFSET))(firstPath, secondPath);
		}

		static ::System::Void RunCancel(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNCANCEL_OFFSET))(path);
		}

		static ::System::Void RunDispose(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNDISPOSE_OFFSET))(path);
		}

		static ::System::Void RunReset(::Foundation::AssetPath firstPath, ::Foundation::AssetPath secondPath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNRESET_OFFSET))(firstPath, secondPath);
		}

		static ::System::Void Case13_ReusedTemplateWaitForComplete(::Foundation::AssetPath firstPath, ::Foundation::AssetPath secondPath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CASE13_REUSEDTEMPLATEWAITFORCOMPLETE_OFFSET))(firstPath, secondPath);
		}

		static ::System::Boolean RunAllTextAssetTests(::Foundation::AssetPath aPath, ::Foundation::AssetPath bPath, ::Foundation::AssetPath cPath, ::Foundation::AssetPath dPath, ::Foundation::AssetPath ePath, ::Foundation::AssetPath gPath, ::Il2CppArray<::Foundation::AssetPath>* childPaths)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNALLTEXTASSETTESTS_OFFSET))(aPath, bPath, cPath, dPath, ePath, gPath, childPaths);
		}

		static ::System::Boolean TestSingleTextAsset(::Foundation::AssetPath path)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTSINGLETEXTASSET_OFFSET))(path);
		}

		static ::System::Boolean TestChainWithLambda(::Foundation::AssetPath firstPath, ::Foundation::AssetPath secondPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTCHAINWITHLAMBDA_OFFSET))(firstPath, secondPath);
		}

		static ::System::Boolean TestChainWithCachedFunc(::Foundation::AssetPath firstPath, ::Foundation::AssetPath secondPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTCHAINWITHCACHEDFUNC_OFFSET))(firstPath, secondPath);
		}

		static ::System::Boolean TestDagTextAsset(::Foundation::AssetPath aPath, ::Foundation::AssetPath bPath, ::Foundation::AssetPath cPath, ::Foundation::AssetPath dPath, ::Foundation::AssetPath ePath, ::Foundation::AssetPath gPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTDAGTEXTASSET_OFFSET))(aPath, bPath, cPath, dPath, ePath, gPath);
		}

		static ::System::Boolean TestLoadManyWithLambda(::Foundation::AssetPath rootPath, ::Il2CppArray<::Foundation::AssetPath>* childPaths)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTLOADMANYWITHLAMBDA_OFFSET))(rootPath, childPaths);
		}

		static ::System::Boolean TestLoadManyWithStaticPaths(::Foundation::AssetPath rootPath, ::Il2CppArray<::Foundation::AssetPath>* childPaths)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTLOADMANYWITHSTATICPATHS_OFFSET))(rootPath, childPaths);
		}

		static ::System::Boolean TestCancelTextAsset(::Foundation::AssetPath path)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTCANCELTEXTASSET_OFFSET))(path);
		}

		static ::System::Boolean TestDisposeTextAsset(::Foundation::AssetPath path)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTDISPOSETEXTASSET_OFFSET))(path);
		}

		static ::System::Boolean TestFailFast(::Foundation::AssetPath goodPath, ::Foundation::AssetPath badPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTFAILFAST_OFFSET))(goodPath, badPath);
		}

		static ::System::Boolean TestFailureUnloadAll(::Foundation::AssetPath goodPath, ::Foundation::AssetPath badPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTFAILUREUNLOADALL_OFFSET))(goodPath, badPath);
		}

		static ::System::Boolean TestFailureKeepLoaded(::Foundation::AssetPath goodPath, ::Foundation::AssetPath badPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTFAILUREKEEPLOADED_OFFSET))(goodPath, badPath);
		}

		static ::System::Boolean TestLoadAssetsFailFast(::Foundation::AssetPath goodPath, ::Foundation::AssetPath badPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTLOADASSETSFAILFAST_OFFSET))(goodPath, badPath);
		}

		static ::System::Boolean TestDynamicChildren(::Foundation::AssetPath rootPath, ::Il2CppArray<::Foundation::AssetPath>* childPaths)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTDYNAMICCHILDREN_OFFSET))(rootPath, childPaths);
		}

		static ::System::Boolean TestFreeNodeAndFindToken(::Foundation::AssetPath mainPath, ::Foundation::AssetPath freePath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTFREENODEANDFINDTOKEN_OFFSET))(mainPath, freePath);
		}

		static ::System::Boolean TestThenSpawnBranch(::Foundation::AssetPath mainPath, ::Foundation::AssetPath thenPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTTHENSPAWNBRANCH_OFFSET))(mainPath, thenPath);
		}

		static ::System::Boolean TestThenSpawnBranchWithAssets(::Foundation::AssetPath mainPath, ::Il2CppArray<::Foundation::AssetPath>* thenPaths)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTTHENSPAWNBRANCHWITHASSETS_OFFSET))(mainPath, thenPaths);
		}

		static ::System::Boolean TestThenSync(::Foundation::AssetPath mainPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTTHENSYNC_OFFSET))(mainPath);
		}

		static ::System::Boolean TestThenChain(::Foundation::AssetPath pathA, ::Foundation::AssetPath pathB, ::Foundation::AssetPath pathC)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTTHENCHAIN_OFFSET))(pathA, pathB, pathC);
		}

		static ::System::Boolean TestSubGraph(::Foundation::AssetPath mainPath, ::Foundation::AssetPath subPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTSUBGRAPH_OFFSET))(mainPath, subPath);
		}

		static ::System::Boolean TestReset(::Foundation::AssetPath firstPath, ::Foundation::AssetPath secondPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTRESET_OFFSET))(firstPath, secondPath);
		}

		static ::System::Boolean TestReusedTemplateWaitForComplete(::Foundation::AssetPath firstPath, ::Foundation::AssetPath secondPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTREUSEDTEMPLATEWAITFORCOMPLETE_OFFSET))(firstPath, secondPath);
		}

		static ::System::Void TestSingleAsync(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTSINGLEASYNC_OFFSET))(path);
		}

		static ::System::Void TestChainAsync(::Foundation::AssetPath firstPath, ::Foundation::AssetPath secondPath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTCHAINASYNC_OFFSET))(firstPath, secondPath);
		}

		static ::System::Void TestDagAsync(::Foundation::AssetPath aPath, ::Foundation::AssetPath bPath, ::Foundation::AssetPath cPath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTDAGASYNC_OFFSET))(aPath, bPath, cPath);
		}

		static ::System::Void TestFailFastAsync(::Foundation::AssetPath goodPath, ::Foundation::AssetPath badPath)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTFAILFASTASYNC_OFFSET))(goodPath, badPath);
		}

		static ::System::Void TestDynamicChildrenAsync(::Foundation::AssetPath rootPath, ::Il2CppArray<::Foundation::AssetPath>* childPaths)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_TESTDYNAMICCHILDRENASYNC_OFFSET))(rootPath, childPaths);
		}

		static ::System::Boolean VerifyTextAssetList(::Foundation::AssetLoadGraph::AssetLoadGraphHandle handle, ::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*> token, ::System::Int32 expectedCount)
		{
			return ((::System::Boolean(*)(::Foundation::AssetLoadGraph::AssetLoadGraphHandle, ::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*>, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_VERIFYTEXTASSETLIST_OFFSET))(handle, token, expectedCount);
		}

		static ::Il2CppArray<::Foundation::AssetPath>* NormalizeChildPaths(::Il2CppArray<::Foundation::AssetPath>* childPaths, ::Foundation::AssetPath bPath, ::Foundation::AssetPath cPath)
		{
			return ((::Il2CppArray<::Foundation::AssetPath>*(*)(::Il2CppArray<::Foundation::AssetPath>*, ::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_NORMALIZECHILDPATHS_OFFSET))(childPaths, bPath, cPath);
		}

		static ::Foundation::AssetPath FirstOrFallback(::Il2CppArray<::Foundation::AssetPath>* paths, ::Foundation::AssetPath fallback)
		{
			return ((::Foundation::AssetPath(*)(::Il2CppArray<::Foundation::AssetPath>*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_FIRSTORFALLBACK_OFFSET))(paths, fallback);
		}

		static ::Foundation::AssetPath CreateBadPath()
		{
			return ((::Foundation::AssetPath(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_CREATEBADPATH_OFFSET))();
		}

		static ::System::Boolean RunTemplateOnceWithWait(::Foundation::AssetLoadGraph::AssetLoadGraph* graph, ::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*> batch, ::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::Int32> count)
		{
			return ((::System::Boolean(*)(::Foundation::AssetLoadGraph::AssetLoadGraph*, ::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*>, ::Foundation::AssetLoadGraph::AssetLoadNodeToken_1<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_RUNTEMPLATEONCEWITHWAIT_OFFSET))(graph, batch, count);
		}

		static ::System::Void LogResult(::System::String* testName, ::System::Boolean ok, ::System::Exception* error)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Exception*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADGRAPH_ASSETLOADGRAPHTEST_LOGRESULT_OFFSET))(testName, ok, error);
		}
	};
}
