#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RPGApplication_UpdateStep.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RPGApplication; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_RPGAPPLICATION_CCTOR_OFFSET UNITYSDK_OFFSET(0xE87D060)
#define RPG_CLIENT_RPGAPPLICATION_CTOR_OFFSET UNITYSDK_OFFSET(0xE879800)
#define RPG_CLIENT_RPGAPPLICATION_DISPATCHANIMATORMOVEMENTJOBSCHEDULE_OFFSET UNITYSDK_OFFSET(0xE8789F0)
#define RPG_CLIENT_RPGAPPLICATION_GET_APPLICATIONID_OFFSET UNITYSDK_OFFSET(0xE87CE50)
#define RPG_CLIENT_RPGAPPLICATION_GET_APPLICATIONNAME_OFFSET UNITYSDK_OFFSET(0xE87CE40)
#define RPG_CLIENT_RPGAPPLICATION_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xE879710)
#define RPG_CLIENT_RPGAPPLICATION_GET_ISAPPLICATIONQUITING_OFFSET UNITYSDK_OFFSET(0xE87D040)
#define RPG_CLIENT_RPGAPPLICATION_GET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0xE87CE00)
#define RPG_CLIENT_RPGAPPLICATION_GET_ISQUIT_OFFSET UNITYSDK_OFFSET(0xE87CE30)
#define RPG_CLIENT_RPGAPPLICATION_GET_ISRECOVERFOCUS_OFFSET UNITYSDK_OFFSET(0xE87CE10)
#define RPG_CLIENT_RPGAPPLICATION_GET_UPDATEFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xE8796B0)
#define RPG_CLIENT_RPGAPPLICATION_GET_UPDATE_STEP_OFFSET UNITYSDK_OFFSET(0xE879680)
#define RPG_CLIENT_RPGAPPLICATION_LIMITFRAMEMAXTIMESTEP_OFFSET UNITYSDK_OFFSET(0xE87CD60)
#define RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0xE87A0F0)
#define RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xE87A250)
#define RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0xE87A5C0)
#define RPG_CLIENT_RPGAPPLICATION_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE87B9F0)
#define RPG_CLIENT_RPGAPPLICATION_ONSTARTLATER_OFFSET UNITYSDK_OFFSET(0xE879AA0)
#define RPG_CLIENT_RPGAPPLICATION_ONSTARTNEXTFRAME_OFFSET UNITYSDK_OFFSET(0xE87C7A0)
#define RPG_CLIENT_RPGAPPLICATION_ONSTART_OFFSET UNITYSDK_OFFSET(0xE879810)
#define RPG_CLIENT_RPGAPPLICATION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xE87AAB0)
#define RPG_CLIENT_RPGAPPLICATION_QUITAPP_OFFSET UNITYSDK_OFFSET(0xE87A8D0)
#define RPG_CLIENT_RPGAPPLICATION_RESTARTAPPNEXTFRAME_OFFSET UNITYSDK_OFFSET(0xE87CA30)
#define RPG_CLIENT_RPGAPPLICATION_RESTARTAPP_OFFSET UNITYSDK_OFFSET(0xE87C5F0)
#define RPG_CLIENT_RPGAPPLICATION_RESTARTGAMEDEV_OFFSET UNITYSDK_OFFSET(0xE87C4B0)
#define RPG_CLIENT_RPGAPPLICATION_RESTARTMAZEDEV_OFFSET UNITYSDK_OFFSET(0xE87C540)
#define RPG_CLIENT_RPGAPPLICATION_SET_ISAPPLICATIONQUITING_OFFSET UNITYSDK_OFFSET(0xE87D050)
#define RPG_CLIENT_RPGAPPLICATION_SET_ISRECOVERFOCUS_OFFSET UNITYSDK_OFFSET(0xE87CE20)
#define RPG_CLIENT_RPGAPPLICATION_SET_UPDATEFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xE8796E0)
#define RPG_CLIENT_RPGAPPLICATION_SET_UPDATE_STEP_OFFSET UNITYSDK_OFFSET(0xE878D30)
#define RPG_CLIENT_RPGAPPLICATION_STARTNEXTFRAME_OFFSET UNITYSDK_OFFSET(0xE87C9A0)
#define RPG_CLIENT_RPGAPPLICATION__AFTERLATEUPDATESCHEDULE_OFFSET UNITYSDK_OFFSET(0xE8792E0)
#define RPG_CLIENT_RPGAPPLICATION__AFTERTICKSCHEDULE_OFFSET UNITYSDK_OFFSET(0xE878DB0)
#define RPG_CLIENT_RPGAPPLICATION__BEFORELATEUPDATESCHEDULE_OFFSET UNITYSDK_OFFSET(0xE879030)
#define RPG_CLIENT_RPGAPPLICATION__BEFORETICKSCHEDULE_OFFSET UNITYSDK_OFFSET(0xE878A80)
#define RPG_CLIENT_RPGAPPLICATION__REGGLOBALNOTIFY_OFFSET UNITYSDK_OFFSET(0xE879D30)
#define RPG_CLIENT_RPGAPPLICATION__TRYRECOVERCLOUDSAVEDATA_OFFSET UNITYSDK_OFFSET(0xE8799D0)
#define RPG_CLIENT_RPGAPPLICATION__UPDATEINPUTLISTENER_OFFSET UNITYSDK_OFFSET(0xE87CE60)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGApplication_TypeDefinitionIndex = 71445;

	class RPGApplication : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _GameObject; // 0x10
		::System::Int32 _LimitMaxTimeStep_LeftFrames; // 0x18
		::System::Single _TimeElapsedAccumulate; // 0x1C
		::System::Boolean _IsQuit; // 0x20
		::System::Boolean _ApplicationStarted; // 0x21
		::System::Boolean _isRecoverFocus; // 0x22
		::System::Byte _padding0[0x1];
		::System::Single _LimitMaxTimeStep_LeftTime; // 0x24
		::System::Boolean _isFocus; // 0x28
		::System::Boolean _IsApplicationQuiting_k__BackingField; // 0x29
		::System::Byte _padding1[0x2];
		::System::Single _LimitMaxTimeStep; // 0x2C
		::System::UInt64 _PauseApplicationTime; // 0x30
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateLoadingManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B10);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateEntityTickLodManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B18);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateAudioManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B20);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateRendererMaterialCacheMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B28);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateBeforeTickScheduleMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B30);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateGamePhaseManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B38);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateEffectPluginManagerEndOfLateTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B40);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateGamePhaseManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B48);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateMonoEffectManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B50);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateBattlePreloadPoolMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B58);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateAfterLateUpdateScheduleMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B60);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateVideoManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B68);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePrefsTickSaveMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B70);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateFollowPointMappingMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B78);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateAfterTickScheduleMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B80);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateStackCameraManagerTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B88);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePipelineCameraMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B90);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateGamePhaseManagerEndOfLateTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61B98);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateTimelineMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61BA0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateCustomLateUpdateManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61BA8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateLuaSystemMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61BB0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateAttachPointManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61BB8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateShaderWarmupManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61BC0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateEmotionLateUpdateManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61BC8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateGameObjectPoolMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61BD0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateThreadProfileManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61BD8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateTimerWorkerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61BE0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateProfilerManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61BE8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateTimerManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61BF0);
		}

		static ::RPG::Client::RPGApplication** StaticGet__Instance()
		{
			return (::RPG::Client::RPGApplication**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61BF8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateAndroidGameStateSeriviceManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C00);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateAsyncProcessorMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C08);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateCharacterEffectManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C10);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateEffectPluginManagerRenderTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C18);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateQAManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C20);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateGameObjectPoolMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C28);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateLoadingManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C30);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateBeforeLateUpdateScheduleMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C38);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePlayGoManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C40);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateStackCameraManagerCollectMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C48);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateShaderPropertyTransitionManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C50);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateMaterialBlockEffectManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C58);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateEffectPluginManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C60);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateAssetMgrMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C68);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateNetworkMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C70);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateConfigDataPoolManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C78);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateMonoEffectManagerEndOfLateTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C80);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePrefsAutoSaveMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C88);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateTAMonoTickManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C90);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateTAMonoTickManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61C98);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateShaderPropertyTransitionManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61CA0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateEffectPluginManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61CA8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateRenderingCommonMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61CB0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateUIMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61CB8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateDynamicOptimizeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x61CC0);
		}

		static ::RPG::Client::RPGApplication_UpdateStep* StaticGet__UpdateStep()
		{
			return (::RPG::Client::RPGApplication_UpdateStep*)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x14340);
		}

		static ::System::Int32* StaticGet__UpdateFrameCount_k__BackingField()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RPGApplication")->GetStaticField(0x14344);
		}

		// static const ::System::Object DefaultFrameMaxTimeStep; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_CCTOR_OFFSET))();
		}

		::System::Void DispatchAnimatorMovementJobSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_DISPATCHANIMATORMOVEMENTJOBSCHEDULE_OFFSET))(this);
		}

		::System::Void _BeforeTickSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__BEFORETICKSCHEDULE_OFFSET))(this);
		}

		::System::Void _AfterTickSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__AFTERTICKSCHEDULE_OFFSET))(this);
		}

		::System::Void _BeforeLateUpdateSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__BEFORELATEUPDATESCHEDULE_OFFSET))(this);
		}

		::System::Void _AfterLateUpdateSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__AFTERLATEUPDATESCHEDULE_OFFSET))(this);
		}

		static ::RPG::Client::RPGApplication_UpdateStep get_UPDATE_STEP()
		{
			return ((::RPG::Client::RPGApplication_UpdateStep(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_UPDATE_STEP_OFFSET))();
		}

		static ::System::Void set_UPDATE_STEP(::RPG::Client::RPGApplication_UpdateStep a1)
		{
			return ((::System::Void(*)(::RPG::Client::RPGApplication_UpdateStep))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_SET_UPDATE_STEP_OFFSET))(a1);
		}

		static ::System::Int32 get_UpdateFrameCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_UPDATEFRAMECOUNT_OFFSET))();
		}

		static ::System::Void set_UpdateFrameCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_SET_UPDATEFRAMECOUNT_OFFSET))(a1);
		}

		static ::RPG::Client::RPGApplication* get_Instance()
		{
			return ((::RPG::Client::RPGApplication*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_INSTANCE_OFFSET))();
		}

		::System::Void OnStart(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONSTART_OFFSET))(this, a1);
		}

		::System::Void OnStartLater()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONSTARTLATER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryRecoverCloudSaveData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__TRYRECOVERCLOUDSAVEDATA_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
		}

		::System::Void OnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void OnApplicationQuit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONQUIT_OFFSET))(this, a1);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void RestartGameDev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_RESTARTGAMEDEV_OFFSET))(this);
		}

		::System::Void RestartMazeDev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_RESTARTMAZEDEV_OFFSET))(this);
		}

		::System::Void RestartApp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_RESTARTAPP_OFFSET))(this);
		}

		::System::Void OnStartNextFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONSTARTNEXTFRAME_OFFSET))(this);
		}

		::System::Collections::IEnumerator* StartNextFrame()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_STARTNEXTFRAME_OFFSET))(this);
		}

		::System::Void RestartAppNextFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_RESTARTAPPNEXTFRAME_OFFSET))(this);
		}

		::System::Void QuitApp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_QUITAPP_OFFSET))(this, a1);
		}

		::System::Void LimitFrameMaxTimeStep(::System::Single a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_LIMITFRAMEMAXTIMESTEP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_ISFOCUS_OFFSET))(this);
		}

		::System::Boolean get_IsRecoverFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_ISRECOVERFOCUS_OFFSET))(this);
		}

		::System::Void set_IsRecoverFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_SET_ISRECOVERFOCUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsQuit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_ISQUIT_OFFSET))(this);
		}

		::System::String* get_ApplicationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_APPLICATIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ApplicationID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_APPLICATIONID_OFFSET))(this);
		}

		::System::Void _UpdateInputListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__UPDATEINPUTLISTENER_OFFSET))(this);
		}

		::System::Void _RegGlobalNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__REGGLOBALNOTIFY_OFFSET))(this);
		}

		::System::Boolean get_IsApplicationQuiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_ISAPPLICATIONQUITING_OFFSET))(this);
		}

		::System::Void set_IsApplicationQuiting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_SET_ISAPPLICATIONQUITING_OFFSET))(this, a1);
		}

	};
}
