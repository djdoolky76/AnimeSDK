#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoadingManager_LoadingType.h"
#include "unitysdk/RPG/Client/LoadingManager_VerifyLoadingType.h"
#include "unitysdk/System/Object.h"
class IJOJFKGLIKA;
class OIJOKMHJKLJ;
class PFINJBIFLHA;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class LoadingManager_WorkDefCounter; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOADINGMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xDEFF320)
#define RPG_CLIENT_LOADINGMANAGER_CTOR_1_OFFSET UNITYSDK_OFFSET(0xDEFBF40)
#define RPG_CLIENT_LOADINGMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xDEFBC40)
#define RPG_CLIENT_LOADINGMANAGER_GET_ENABLECUSTOMPRELOAD_OFFSET UNITYSDK_OFFSET(0xDEFF2E0)
#define RPG_CLIENT_LOADINGMANAGER_GET_FINISHEDWORKCOUNT_OFFSET UNITYSDK_OFFSET(0xDEFF2D0)
#define RPG_CLIENT_LOADINGMANAGER_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xDEFF210)
#define RPG_CLIENT_LOADINGMANAGER_GET_SKIPSCENEITEMFADING_OFFSET UNITYSDK_OFFSET(0xDEFF300)
#define RPG_CLIENT_LOADINGMANAGER_GET_TOTALWORKCOUNT_OFFSET UNITYSDK_OFFSET(0xDEFF2C0)
#define RPG_CLIENT_LOADINGMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDEFC2E0)
#define RPG_CLIENT_LOADINGMANAGER_ISGAMELOADING_OFFSET UNITYSDK_OFFSET(0xDEFCA50)
#define RPG_CLIENT_LOADINGMANAGER_LATETICK_OFFSET UNITYSDK_OFFSET(0xDEFCD20)
#define RPG_CLIENT_LOADINGMANAGER_RECORDPERFORMANCEID_OFFSET UNITYSDK_OFFSET(0xDEFD5E0)
#define RPG_CLIENT_LOADINGMANAGER_REGISTELOADINGWORKDEFSCOUNTER_OFFSET UNITYSDK_OFFSET(0xDEFC3F0)
#define RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONBEGIN_OFFSET UNITYSDK_OFFSET(0xDEFD400)
#define RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONEND_OFFSET UNITYSDK_OFFSET(0xDEFD4B0)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGADVINITEND_OFFSET UNITYSDK_OFFSET(0xDEFD290)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGBEGIN_OFFSET UNITYSDK_OFFSET(0xDEFD630)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGDATA_OFFSET UNITYSDK_OFFSET(0xDEFD890)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYFAILCOUNT_OFFSET UNITYSDK_OFFSET(0xDEFCFD0)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYRESULT_OFFSET UNITYSDK_OFFSET(0xDEFD130)
#define RPG_CLIENT_LOADINGMANAGER_REPORTSCREENSTUCKBEGIN_OFFSET UNITYSDK_OFFSET(0xDEFD350)
#define RPG_CLIENT_LOADINGMANAGER_SETLOADFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xDEFC9B0)
#define RPG_CLIENT_LOADINGMANAGER_SETLOADINGCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xDEFCD60)
#define RPG_CLIENT_LOADINGMANAGER_SETPROGRESSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xDEFCA00)
#define RPG_CLIENT_LOADINGMANAGER_SET_ENABLECUSTOMPRELOAD_OFFSET UNITYSDK_OFFSET(0xDEFF2F0)
#define RPG_CLIENT_LOADINGMANAGER_SET_SKIPSCENEITEMFADING_OFFSET UNITYSDK_OFFSET(0xDEFF310)
#define RPG_CLIENT_LOADINGMANAGER_STARTTICK_OFFSET UNITYSDK_OFFSET(0xDEFC500)
#define RPG_CLIENT_LOADINGMANAGER_STOPTICK_OFFSET UNITYSDK_OFFSET(0xDEFC700)
#define RPG_CLIENT_LOADINGMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xDEFCAA0)
#define RPG_CLIENT_LOADINGMANAGER__COMPUTEFINISHEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xDEFEF30)
#define RPG_CLIENT_LOADINGMANAGER__COMPUTENEXTPROGRESS_OFFSET UNITYSDK_OFFSET(0xDEFF260)
#define RPG_CLIENT_LOADINGMANAGER__CONVERTTIMETOSECOND_OFFSET UNITYSDK_OFFSET(0xDEFEBA0)
#define RPG_CLIENT_LOADINGMANAGER__CUSTOMUPDATEPRELOADMANAGER_OFFSET UNITYSDK_OFFSET(0xDEFCBE0)
#define RPG_CLIENT_LOADINGMANAGER__GETMAXLOADINGTIME_OFFSET UNITYSDK_OFFSET(0xDEFEC20)
#define RPG_CLIENT_LOADINGMANAGER__ISLOADINGTYPEREPORTMATCH_OFFSET UNITYSDK_OFFSET(0xDEFEB00)
#define RPG_CLIENT_LOADINGMANAGER__ONLOADMAPSTUCKSAMPLEPOINT_OFFSET UNITYSDK_OFFSET(0xDEFB9D0)
#define RPG_CLIENT_LOADINGMANAGER__ONQUEUENEWWORK_OFFSET UNITYSDK_OFFSET(0xDEFEDC0)
#define RPG_CLIENT_LOADINGMANAGER__ONWORKFINISH_OFFSET UNITYSDK_OFFSET(0xDEFEF80)
#define RPG_CLIENT_LOADINGMANAGER__REFRESHWORKDEFCOUNT_OFFSET UNITYSDK_OFFSET(0xDEFC440)
#define RPG_CLIENT_LOADINGMANAGER__RESETSTUCKCHECKTIMERWHENWORKFINISH_OFFSET UNITYSDK_OFFSET(0xDEFB8B0)
#define RPG_CLIENT_LOADINGMANAGER__STARTSTUCKCHECK_OFFSET UNITYSDK_OFFSET(0xDEFB470)
#define RPG_CLIENT_LOADINGMANAGER__STOPSTUCKCHECK_OFFSET UNITYSDK_OFFSET(0xDEFB640)
#define RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_LOADMAP_OFFSET UNITYSDK_OFFSET(0xDEFB7F0)
#define RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_OFFSET UNITYSDK_OFFSET(0xDEFB700)
#define RPG_CLIENT_LOADINGMANAGER__TRYADDTOWATCH_OFFSET UNITYSDK_OFFSET(0xDEFECE0)
#define RPG_CLIENT_LOADINGMANAGER__UPDATEFINISHPROGRESS_OFFSET UNITYSDK_OFFSET(0xDEFEE20)

namespace RPG::Client
{
	inline static constexpr unsigned int LoadingManager_TypeDefinitionIndex = 61952;

	class LoadingManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _ReportTryLoadStates; // 0x10
		::System::Action_1<::System::Single>* _ProgressChangedCallback; // 0x18
		::System::Collections::Generic::HashSet_1<::OIJOKMHJKLJ*>* _LoadingWorks; // 0x20
		::System::Action* _LoadFinishCallback; // 0x28
		::IJOJFKGLIKA* _AsyncProcessor; // 0x30
		::PFINJBIFLHA* _LoadMapStuckReportData; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* _MonsterWaveList; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ReportNotifyArguments; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ReportArguments; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _ReportTryLoadFails; // 0x58
		::RPG::Client::LoadingManager_WorkDefCounter* _workDefCounter; // 0x60
		::System::Single _MazeToBattleMaxTime; // 0x68
		::System::Single _LeavePerformanceMaxTime; // 0x6C
		::System::UInt64 _ScreenStuckTimeBegin; // 0x70
		::System::UInt64 _ADVInitTime; // 0x78
		::System::UInt64 _EffectTransitionExistTime; // 0x80
		::System::Int32 _LoadingType; // 0x88
		::System::UInt32 _LastMapID; // 0x8C
		::System::Single _FinishedProgress; // 0x90
		::System::Int32 _TargetFrameRateBeforeStartTick; // 0x94
		::System::Int32 _WorkActionCallNums; // 0x98
		::System::Single _StuckCheckTimer; // 0x9C
		::System::Single _EnterPerformanceMaxTime; // 0xA0
		::System::Single _LoadMapMaxTime; // 0xA4
		::System::Int32 _TotalWorkCount; // 0xA8
		::System::Boolean _SkipSceneItemFading_k__BackingField; // 0xAC
		::System::Boolean _StartTick; // 0xAD
		::System::Boolean _EnableCustomPreload_k__BackingField; // 0xAE
		::System::Boolean _ResetTargetFPSFlag; // 0xAF
		::System::Boolean _LogReported; // 0xB0
		::System::Boolean _ResetMainCameraCullingFlag; // 0xB1
		::System::Byte _padding0[0x6];
		::System::UInt64 _WorkActionTimeBegin; // 0xB8
		::System::Int32 _FinishedWorkCount; // 0xC0
		::System::Int32 _MainCameraOriginCullingMask; // 0xC4
		::System::UInt64 _ADVInitTimeBegin; // 0xC8
		::System::UInt64 _ScreenStuckTime; // 0xD0
		::System::UInt64 _TotalLoadingTime; // 0xD8
		::System::UInt64 _TotalLoadingTimeBegin; // 0xE0
		::System::UInt64 _EffectTransitionExistTimeBegin; // 0xE8
		::System::UInt64 _WorkActionTime; // 0xF0
		::System::Single _DesignDataLoadMaxTime; // 0xF8
		::System::UInt32 _LastStageID; // 0xFC
		::System::UInt32 _PerformanceID; // 0x100
		::System::Single _BattleToMazeMaxTime; // 0x104
		static ::RPG::Client::RPGProfilerMarker** StaticGet__CustomUpdatePreloadManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "LoadingManager")->GetStaticField(0x446C0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__StartTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "LoadingManager")->GetStaticField(0x446C8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__StopTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "LoadingManager")->GetStaticField(0x446D0);
		}

		// static const ::System::Object _TARGET_FRAME_RATE_DURING_TICK; // 0x0
		// static const ::System::String* _Loading_Max_Time_LoadMapIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_MazeToBattleIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_BattleToMazeIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_DesignLoadDataIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_EnterPerformanceIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_LeavePerformanceIDKey; // 0x0
		// static const ::System::String* _adv_loading_receive_packet_count_key; // 0x0
		// static const ::System::String* _adv_loading_receive_packet_list_key; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IJOJFKGLIKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJOJFKGLIKA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_CCTOR_OFFSET))();
		}

		::System::Void _StartStuckCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__STARTSTUCKCHECK_OFFSET))(this);
		}

		::System::Void _StopStuckCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__STOPSTUCKCHECK_OFFSET))(this);
		}

		::System::Void _TickStuckCheck(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_OFFSET))(this, a1);
		}

		::System::Void _ResetStuckCheckTimerWhenWorkFinish(::OIJOKMHJKLJ* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__RESETSTUCKCHECKTIMERWHENWORKFINISH_OFFSET))(this, a1, a2);
		}

		::System::Void _TickStuckCheck_LoadMap(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_LOADMAP_OFFSET))(this, a1);
		}

		::System::Void _OnLoadMapStuckSamplePoint(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ONLOADMAPSTUCKSAMPLEPOINT_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_INITIALIZE_OFFSET))(this);
		}

		::System::Void RegisteLoadingWorkDefsCounter(::RPG::Client::LoadingManager_WorkDefCounter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoadingManager_WorkDefCounter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REGISTELOADINGWORKDEFSCOUNTER_OFFSET))(this, a1);
		}

		::System::Void StartTick(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_STARTTICK_OFFSET))(this, a1);
		}

		::System::Void StopTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_STOPTICK_OFFSET))(this);
		}

		::System::Void SetLoadFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SETLOADFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetProgressChangedCallback(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SETPROGRESSCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean IsGameLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_ISGAMELOADING_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_LATETICK_OFFSET))(this);
		}

		::System::Void _CustomUpdatePreloadManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CUSTOMUPDATEPRELOADMANAGER_OFFSET))(this);
		}

		::System::Void SetLoadingConfigData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SETLOADINGCONFIGDATA_OFFSET))(this);
		}

		::System::Void ReportLoadingTryFailCount(::RPG::Client::IAssetOperation* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYFAILCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void ReportLoadingTryResult(::RPG::Client::IAssetOperation* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYRESULT_OFFSET))(this, a1, a2);
		}

		::System::Void ReportLoadingADVInitEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGADVINITEND_OFFSET))(this);
		}

		::System::Void ReportScreenStuckBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTSCREENSTUCKBEGIN_OFFSET))(this);
		}

		::System::Void ReportEffectTransitionBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONBEGIN_OFFSET))(this);
		}

		::System::Void ReportEffectTransitionEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONEND_OFFSET))(this);
		}

		::System::Void RecordPerformanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_RECORDPERFORMANCEID_OFFSET))(this, a1);
		}

		::System::Void ReportLoadingBegin(::RPG::Client::LoadingManager_LoadingType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoadingManager_LoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void ReportLoadingData(::RPG::Client::LoadingManager_VerifyLoadingType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoadingManager_VerifyLoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGDATA_OFFSET))(this, a1);
		}

		::System::Boolean _IsLoadingTypeReportMatch(::RPG::Client::LoadingManager_LoadingType a1, ::RPG::Client::LoadingManager_VerifyLoadingType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LoadingManager_LoadingType, ::RPG::Client::LoadingManager_VerifyLoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ISLOADINGTYPEREPORTMATCH_OFFSET))(this, a1, a2);
		}

		::System::Single _GetMaxLoadingTime(::RPG::Client::LoadingManager_LoadingType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LoadingManager_LoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__GETMAXLOADINGTIME_OFFSET))(this, a1);
		}

		::System::Single _ConvertTimeToSecond(::System::UInt64 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CONVERTTIMETOSECOND_OFFSET))(this, a1);
		}

		::System::Void _TryAddToWatch(::OIJOKMHJKLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__TRYADDTOWATCH_OFFSET))(this, a1);
		}

		::System::Void _RefreshWorkDefCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__REFRESHWORKDEFCOUNT_OFFSET))(this);
		}

		::System::Void _OnQueueNewWork(::OIJOKMHJKLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ONQUEUENEWWORK_OFFSET))(this, a1);
		}

		::System::Void _UpdateFinishProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__UPDATEFINISHPROGRESS_OFFSET))(this);
		}

		::System::Void _OnWorkFinish(::OIJOKMHJKLJ* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ONWORKFINISH_OFFSET))(this, a1, a2);
		}

		::System::Single _ComputeFinishedProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__COMPUTEFINISHEDPROGRESS_OFFSET))(this);
		}

		::System::Single _ComputeNextProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__COMPUTENEXTPROGRESS_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_PROGRESS_OFFSET))(this);
		}

		::System::Int32 get_TotalWorkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_TOTALWORKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_FinishedWorkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_FINISHEDWORKCOUNT_OFFSET))(this);
		}

		::System::Boolean get_EnableCustomPreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_ENABLECUSTOMPRELOAD_OFFSET))(this);
		}

		::System::Void set_EnableCustomPreload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SET_ENABLECUSTOMPRELOAD_OFFSET))(this, a1);
		}

		::System::Boolean get_SkipSceneItemFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_SKIPSCENEITEMFADING_OFFSET))(this);
		}

		::System::Void set_SkipSceneItemFading(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SET_SKIPSCENEITEMFADING_OFFSET))(this, a1);
		}

	};
}
