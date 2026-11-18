#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadCompletion_1.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace Foundation::AssetLoadTask { class AssetLoadTaskTest_NodeCounterState; }
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CANCELCOUNTED_OFFSET UNITYSDK_OFFSET(0x1EA76D80)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CANCELNOOP_OFFSET UNITYSDK_OFFSET(0x1EA76AC0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE10_COMPOSEDSUBTASK_OFFSET UNITYSDK_OFFSET(0x1EA72FB0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE1_SINGLEASSET_OFFSET UNITYSDK_OFFSET(0x1EA70520)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE2_CHAINWITHLET_OFFSET UNITYSDK_OFFSET(0x1EA70960)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE3_DAGDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1EA70DA0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE4_LOADASSETS_OFFSET UNITYSDK_OFFSET(0x1EA718A0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE5_THENACTION_OFFSET UNITYSDK_OFFSET(0x1EA71C70)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE6_DYNAMICCHILDRENFENCE_OFFSET UNITYSDK_OFFSET(0x1EA71F00)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE7_PARALLELBRANCHESAFTERROOT_OFFSET UNITYSDK_OFFSET(0x1EA72390)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE8_FAILUREKEEPSLOADEDRESOURCE_OFFSET UNITYSDK_OFFSET(0x1EA72930)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE9_LETERRORFALLBACKRESOURCE_OFFSET UNITYSDK_OFFSET(0x1EA72CB0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_COMPLETEWITHSEVEN_OFFSET UNITYSDK_OFFSET(0x1EA768C0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CREATEBADPATH_OFFSET UNITYSDK_OFFSET(0x1EA75B20)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CREATESUBTEXTTASK_OFFSET UNITYSDK_OFFSET(0x1EA733B0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_FAILINTTASK_OFFSET UNITYSDK_OFFSET(0x1EA76DC0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_FAILWITHTESTERROR_OFFSET UNITYSDK_OFFSET(0x1EA76EC0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_FIRSTORFALLBACK_OFFSET UNITYSDK_OFFSET(0x1EA763C0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_IDENTITY_OFFSET UNITYSDK_OFFSET(0x1EA77260)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_INCREMENT_OFFSET UNITYSDK_OFFSET(0x1EA772A0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_LOADTEXTASSET_OFFSET UNITYSDK_OFFSET(0x1EA767F0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_LOGRESULT_OFFSET UNITYSDK_OFFSET(0x1EA75BF0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_MULTIPLYBYTWO_OFFSET UNITYSDK_OFFSET(0x1EA76880)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_NORMALIZECHILDPATHS_OFFSET UNITYSDK_OFFSET(0x1EA71B80)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RUNALLTEXTASSETTESTS_OFFSET UNITYSDK_OFFSET(0x1EA75640)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RUNALL_OFFSET UNITYSDK_OFFSET(0x1EA75D40)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_STARTCOUNTED_OFFSET UNITYSDK_OFFSET(0x1EA76B00)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_STARTDEFERRED_OFFSET UNITYSDK_OFFSET(0x1EA76C10)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTCHAINWITHCACHEDFUNC_OFFSET UNITYSDK_OFFSET(0x1EA75FF0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTCHAINWITHLAMBDA_OFFSET UNITYSDK_OFFSET(0x1EA75F70)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTCUSTOMASYNCIMMEDIATECOMPLETION_OFFSET UNITYSDK_OFFSET(0x1EA73A30)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTCUSTOMASYNCSOURCE_OFFSET UNITYSDK_OFFSET(0x1EA73740)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTDAGTEXTASSET_OFFSET UNITYSDK_OFFSET(0x1EA76070)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTDYNAMICCHILDREN_OFFSET UNITYSDK_OFFSET(0x1EA762B0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTFAILEDRUNKEEPSCAPTUREDRESULT_OFFSET UNITYSDK_OFFSET(0x1EA75290)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTFAILFAST_OFFSET UNITYSDK_OFFSET(0x1EA76770)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTLOADMANYWITHLAMBDA_OFFSET UNITYSDK_OFFSET(0x1EA76240)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTLOADMANYWITHSTATICPATHS_OFFSET UNITYSDK_OFFSET(0x1EA761D0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTNAMEDOBSERVER_OFFSET UNITYSDK_OFFSET(0x1EA74660)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTRUNNODESINGLEEXECUTIONANDCAPTURE_OFFSET UNITYSDK_OFFSET(0x1EA74DB0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTSINGLETEXTASSET_OFFSET UNITYSDK_OFFSET(0x1EA75F10)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTSUBTASK_OFFSET UNITYSDK_OFFSET(0x1EA766F0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTTASKCANRUNTWICE_OFFSET UNITYSDK_OFFSET(0x1EA749B0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTTHENADDACTION_OFFSET UNITYSDK_OFFSET(0x1EA765F0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTTHENCHAIN_OFFSET UNITYSDK_OFFSET(0x1EA76650)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTTHENLOADASSETS_OFFSET UNITYSDK_OFFSET(0x1EA764E0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTTHENLOADASSET_OFFSET UNITYSDK_OFFSET(0x1EA76450)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTTHEN_OFFSET UNITYSDK_OFFSET(0x1EA73450)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTWHENALLLIST_OFFSET UNITYSDK_OFFSET(0x1EA73D70)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTWHENALLTRIPLEANDQUAD_OFFSET UNITYSDK_OFFSET(0x1EA74140)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TRYCOMPLETECOUNTED_OFFSET UNITYSDK_OFFSET(0x1EA76C70)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TRYCOMPLETEWITHSEVEN_OFFSET UNITYSDK_OFFSET(0x1EA769C0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TRYFAILWITHTESTERROR_OFFSET UNITYSDK_OFFSET(0x1EA77090)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_VERIFYTEXTASSETLIST_OFFSET UNITYSDK_OFFSET(0x1EA71710)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskTest_TypeDefinitionIndex = 8119;

	class AssetLoadTaskTest : public ::System::Object
	{
	public:
		// static const ::System::String* BadPathString; // 0x0

		static ::System::Boolean Case1_SingleAsset(::Foundation::AssetPath path)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE1_SINGLEASSET_OFFSET))(path);
		}

		static ::System::Boolean Case2_ChainWithLet(::Foundation::AssetPath firstPath, ::Foundation::AssetPath secondPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE2_CHAINWITHLET_OFFSET))(firstPath, secondPath);
		}

		static ::System::Boolean Case3_DagDependencies(::Foundation::AssetPath aPath, ::Foundation::AssetPath bPath, ::Foundation::AssetPath cPath, ::Foundation::AssetPath dPath, ::Foundation::AssetPath ePath, ::Foundation::AssetPath gPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE3_DAGDEPENDENCIES_OFFSET))(aPath, bPath, cPath, dPath, ePath, gPath);
		}

		static ::System::Boolean Case4_LoadAssets(::Foundation::AssetPath rootPath, ::Il2CppArray<::Foundation::AssetPath>* childPaths)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE4_LOADASSETS_OFFSET))(rootPath, childPaths);
		}

		static ::System::Boolean Case5_ThenAction(::Foundation::AssetPath path)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE5_THENACTION_OFFSET))(path);
		}

		static ::System::Boolean Case6_DynamicChildrenFence(::Foundation::AssetPath rootPath, ::Il2CppArray<::Foundation::AssetPath>* childPaths, ::Foundation::AssetPath subPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE6_DYNAMICCHILDRENFENCE_OFFSET))(rootPath, childPaths, subPath);
		}

		static ::System::Boolean Case7_ParallelBranchesAfterRoot(::Foundation::AssetPath rootPath, ::Foundation::AssetPath branchPath, ::Foundation::AssetPath ePath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE7_PARALLELBRANCHESAFTERROOT_OFFSET))(rootPath, branchPath, ePath);
		}

		static ::System::Boolean Case8_FailureKeepsLoadedResource(::Foundation::AssetPath goodPath, ::Foundation::AssetPath badPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE8_FAILUREKEEPSLOADEDRESOURCE_OFFSET))(goodPath, badPath);
		}

		static ::System::Boolean Case9_LetErrorFallbackResource(::Foundation::AssetPath badPath, ::Foundation::AssetPath fallbackPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE9_LETERRORFALLBACKRESOURCE_OFFSET))(badPath, fallbackPath);
		}

		static ::System::Boolean Case10_ComposedSubTask(::Foundation::AssetPath mainPath, ::Foundation::AssetPath subPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CASE10_COMPOSEDSUBTASK_OFFSET))(mainPath, subPath);
		}

		static ::System::Boolean TestThen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTTHEN_OFFSET))();
		}

		static ::System::Boolean TestCustomAsyncSource()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTCUSTOMASYNCSOURCE_OFFSET))();
		}

		static ::System::Boolean TestCustomAsyncImmediateCompletion()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTCUSTOMASYNCIMMEDIATECOMPLETION_OFFSET))();
		}

		static ::System::Boolean TestWhenAllList()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTWHENALLLIST_OFFSET))();
		}

		static ::System::Boolean TestWhenAllTripleAndQuad()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTWHENALLTRIPLEANDQUAD_OFFSET))();
		}

		static ::System::Boolean TestNamedObserver()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTNAMEDOBSERVER_OFFSET))();
		}

		static ::System::Boolean TestTaskCanRunTwice(::Foundation::AssetPath path)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTTASKCANRUNTWICE_OFFSET))(path);
		}

		static ::System::Boolean TestRunNodeSingleExecutionAndCapture()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTRUNNODESINGLEEXECUTIONANDCAPTURE_OFFSET))();
		}

		static ::System::Boolean TestFailedRunKeepsCapturedResult()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTFAILEDRUNKEEPSCAPTUREDRESULT_OFFSET))();
		}

		static ::System::Boolean RunAllTextAssetTests(::Foundation::AssetPath aPath, ::Foundation::AssetPath bPath, ::Foundation::AssetPath cPath, ::Foundation::AssetPath dPath, ::Foundation::AssetPath ePath, ::Foundation::AssetPath gPath, ::Il2CppArray<::Foundation::AssetPath>* childPaths)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RUNALLTEXTASSETTESTS_OFFSET))(aPath, bPath, cPath, dPath, ePath, gPath, childPaths);
		}

		static ::System::Boolean RunAll(::Foundation::AssetPath firstPath, ::Foundation::AssetPath secondPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RUNALL_OFFSET))(firstPath, secondPath);
		}

		static ::System::Boolean TestSingleTextAsset(::Foundation::AssetPath path)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTSINGLETEXTASSET_OFFSET))(path);
		}

		static ::System::Boolean TestChainWithLambda(::Foundation::AssetPath firstPath, ::Foundation::AssetPath secondPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTCHAINWITHLAMBDA_OFFSET))(firstPath, secondPath);
		}

		static ::System::Boolean TestChainWithCachedFunc(::Foundation::AssetPath firstPath, ::Foundation::AssetPath secondPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTCHAINWITHCACHEDFUNC_OFFSET))(firstPath, secondPath);
		}

		static ::System::Boolean TestDagTextAsset(::Foundation::AssetPath aPath, ::Foundation::AssetPath bPath, ::Foundation::AssetPath cPath, ::Foundation::AssetPath dPath, ::Foundation::AssetPath ePath, ::Foundation::AssetPath gPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTDAGTEXTASSET_OFFSET))(aPath, bPath, cPath, dPath, ePath, gPath);
		}

		static ::System::Boolean TestLoadManyWithStaticPaths(::Foundation::AssetPath rootPath, ::Il2CppArray<::Foundation::AssetPath>* childPaths)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTLOADMANYWITHSTATICPATHS_OFFSET))(rootPath, childPaths);
		}

		static ::System::Boolean TestLoadManyWithLambda(::Foundation::AssetPath rootPath, ::Il2CppArray<::Foundation::AssetPath>* childPaths)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTLOADMANYWITHLAMBDA_OFFSET))(rootPath, childPaths);
		}

		static ::System::Boolean TestDynamicChildren(::Foundation::AssetPath rootPath, ::Il2CppArray<::Foundation::AssetPath>* childPaths)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTDYNAMICCHILDREN_OFFSET))(rootPath, childPaths);
		}

		static ::System::Boolean TestThenLoadAsset(::Foundation::AssetPath mainPath, ::Foundation::AssetPath thenPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTTHENLOADASSET_OFFSET))(mainPath, thenPath);
		}

		static ::System::Boolean TestThenLoadAssets(::Foundation::AssetPath mainPath, ::Il2CppArray<::Foundation::AssetPath>* thenPaths)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTTHENLOADASSETS_OFFSET))(mainPath, thenPaths);
		}

		static ::System::Boolean TestThenAddAction(::Foundation::AssetPath mainPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTTHENADDACTION_OFFSET))(mainPath);
		}

		static ::System::Boolean TestThenChain(::Foundation::AssetPath pathA, ::Foundation::AssetPath pathB, ::Foundation::AssetPath pathC)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTTHENCHAIN_OFFSET))(pathA, pathB, pathC);
		}

		static ::System::Boolean TestSubTask(::Foundation::AssetPath mainPath, ::Foundation::AssetPath subPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTSUBTASK_OFFSET))(mainPath, subPath);
		}

		static ::System::Boolean TestFailFast(::Foundation::AssetPath goodPath, ::Foundation::AssetPath badPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TESTFAILFAST_OFFSET))(goodPath, badPath);
		}

		static ::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>* LoadTextAsset(::Foundation::AssetPath path)
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>*(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_LOADTEXTASSET_OFFSET))(path);
		}

		static ::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>* CreateSubTextTask(::Foundation::AssetPath path)
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::UnityEngine::TextAsset*>*(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CREATESUBTEXTTASK_OFFSET))(path);
		}

		static ::System::Boolean VerifyTextAssetList(::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* loaded, ::System::Int32 expectedCount)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_VERIFYTEXTASSETLIST_OFFSET))(loaded, expectedCount);
		}

		static ::Il2CppArray<::Foundation::AssetPath>* NormalizeChildPaths(::Il2CppArray<::Foundation::AssetPath>* childPaths, ::Foundation::AssetPath bPath, ::Foundation::AssetPath cPath)
		{
			return ((::Il2CppArray<::Foundation::AssetPath>*(*)(::Il2CppArray<::Foundation::AssetPath>*, ::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_NORMALIZECHILDPATHS_OFFSET))(childPaths, bPath, cPath);
		}

		static ::Foundation::AssetPath FirstOrFallback(::Il2CppArray<::Foundation::AssetPath>* paths, ::Foundation::AssetPath fallback)
		{
			return ((::Foundation::AssetPath(*)(::Il2CppArray<::Foundation::AssetPath>*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_FIRSTORFALLBACK_OFFSET))(paths, fallback);
		}

		static ::Foundation::AssetPath CreateBadPath()
		{
			return ((::Foundation::AssetPath(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CREATEBADPATH_OFFSET))();
		}

		static ::System::Void LogResult(::System::String* testName, ::System::Boolean ok, ::System::Exception* error)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Exception*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_LOGRESULT_OFFSET))(testName, ok, error);
		}

		static ::System::Int32 MultiplyByTwo(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_MULTIPLYBYTWO_OFFSET))(value);
		}

		static ::System::Void CompleteWithSeven(::Foundation::AssetLoadTask::AssetLoadCompletion_1<::System::Int32> completion)
		{
			return ((::System::Void(*)(::Foundation::AssetLoadTask::AssetLoadCompletion_1<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_COMPLETEWITHSEVEN_OFFSET))(completion);
		}

		static ::System::Boolean TryCompleteWithSeven(::Foundation::AssetLoadTask::AssetLoadCompletion_1<::System::Int32> completion)
		{
			return ((::System::Boolean(*)(::Foundation::AssetLoadTask::AssetLoadCompletion_1<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TRYCOMPLETEWITHSEVEN_OFFSET))(completion);
		}

		static ::System::Void CancelNoop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CANCELNOOP_OFFSET))();
		}

		static ::System::Void StartCounted(::Foundation::AssetLoadTask::AssetLoadTaskTest_NodeCounterState* state, ::Foundation::AssetLoadTask::AssetLoadCompletion_1<::System::Int32> completion)
		{
			return ((::System::Void(*)(::Foundation::AssetLoadTask::AssetLoadTaskTest_NodeCounterState*, ::Foundation::AssetLoadTask::AssetLoadCompletion_1<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_STARTCOUNTED_OFFSET))(state, completion);
		}

		static ::System::Void StartDeferred(::Foundation::AssetLoadTask::AssetLoadTaskTest_NodeCounterState* state, ::Foundation::AssetLoadTask::AssetLoadCompletion_1<::System::Int32> completion)
		{
			return ((::System::Void(*)(::Foundation::AssetLoadTask::AssetLoadTaskTest_NodeCounterState*, ::Foundation::AssetLoadTask::AssetLoadCompletion_1<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_STARTDEFERRED_OFFSET))(state, completion);
		}

		static ::System::Boolean TryCompleteCounted(::Foundation::AssetLoadTask::AssetLoadTaskTest_NodeCounterState* state, ::Foundation::AssetLoadTask::AssetLoadCompletion_1<::System::Int32> completion)
		{
			return ((::System::Boolean(*)(::Foundation::AssetLoadTask::AssetLoadTaskTest_NodeCounterState*, ::Foundation::AssetLoadTask::AssetLoadCompletion_1<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TRYCOMPLETECOUNTED_OFFSET))(state, completion);
		}

		static ::System::Void CancelCounted(::Foundation::AssetLoadTask::AssetLoadTaskTest_NodeCounterState* state)
		{
			return ((::System::Void(*)(::Foundation::AssetLoadTask::AssetLoadTaskTest_NodeCounterState*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_CANCELCOUNTED_OFFSET))(state);
		}

		static ::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Int32>* FailIntTask(::System::Int32 value)
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Int32>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_FAILINTTASK_OFFSET))(value);
		}

		static ::System::Void FailWithTestError(::Foundation::AssetLoadTask::AssetLoadCompletion_1<::System::Int32> completion)
		{
			return ((::System::Void(*)(::Foundation::AssetLoadTask::AssetLoadCompletion_1<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_FAILWITHTESTERROR_OFFSET))(completion);
		}

		static ::System::Boolean TryFailWithTestError(::Foundation::AssetLoadTask::AssetLoadCompletion_1<::System::Int32> completion)
		{
			return ((::System::Boolean(*)(::Foundation::AssetLoadTask::AssetLoadCompletion_1<::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_TRYFAILWITHTESTERROR_OFFSET))(completion);
		}

		static ::System::Int32 Identity(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_IDENTITY_OFFSET))(value);
		}

		static ::System::Int32 Increment(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_INCREMENT_OFFSET))(value);
		}
	};
}
