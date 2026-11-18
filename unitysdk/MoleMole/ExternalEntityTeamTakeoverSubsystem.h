#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHFKBDFJDLI.h"
#include "unitysdk/HFAHKKFPHHM.h"
#include "unitysdk/INPKPAEBOLJ.h"
#include "unitysdk/JGMDNACJOPD.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/ExternalEntityTeamTakeoverSubsystem_TakeoverTargets.h"
#include "unitysdk/OBBFELCMLJM.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ENGKPGFGGLM;
class GEIHCPAOKKK;
namespace MoleMole { class ExternalEntityTeamTakeoverSubsystem_TakeoverState; }
namespace MoleMole::Cameras { class CameraTrackBlending; }

#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_APPLYCAMERAANGLEBEFORESWITCH_OFFSET UNITYSDK_OFFSET(0x1A080BB0)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_APPLYTAKENOVERENTITYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A0813A0)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_APPLYTAKEOVERTOTARGET_OFFSET UNITYSDK_OFFSET(0x1A080480)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_BEGINTAKEOVER_OFFSET UNITYSDK_OFFSET(0x1A07EE60)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_CLOSEQTEWINDOWIFOPENED_OFFSET UNITYSDK_OFFSET(0x1A07F780)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_DISPATCHTAKEOVERNOTIFY_OFFSET UNITYSDK_OFFSET(0x1A07E040)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_ENTERTAKEOVERSCOPE_OFFSET UNITYSDK_OFFSET(0x1A07DFD0)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_EXITTAKEOVERSCOPE_OFFSET UNITYSDK_OFFSET(0x1A07E410)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_FINISHRESTORE_OFFSET UNITYSDK_OFFSET(0x1A07D730)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_GET_CURRENTTAKEOVERCONFIGID_OFFSET UNITYSDK_OFFSET(0x1A07DDF0)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_GET_CURRENTTAKEOVERGROUPID_OFFSET UNITYSDK_OFFSET(0x1A07DD60)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_GET_CURRENTTAKEOVERTYPE_OFFSET UNITYSDK_OFFSET(0x1A07DE80)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_GET_ISTAKINGOVER_OFFSET UNITYSDK_OFFSET(0x1A07DC10)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_GET_TAKENOVERENTITY_OFFSET UNITYSDK_OFFSET(0x1A07DC70)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_ISTARGETALIVE_OFFSET UNITYSDK_OFFSET(0x1A07D8C0)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A07DBA0)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_ONENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x1A07D320)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1A07D240)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_ONTEAMREPLACECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A07D3A0)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_RECREATETEAMENTITY_OFFSET UNITYSDK_OFFSET(0x1A07FE20)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A07CEA0)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_RELEASETAKEOVER_OFFSET UNITYSDK_OFFSET(0x1A07D990)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_RESOLVERESTOREEXITREASON_OFFSET UNITYSDK_OFFSET(0x1A07E490)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_RESTOREORIGINALTEAMNEXTFRAMEASYNC_OFFSET UNITYSDK_OFFSET(0x1A0810C0)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_RESTOREORIGINALTEAM_OFFSET UNITYSDK_OFFSET(0x1A07F900)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_SCHEDULERESTOREFORLOSTTARGET_OFFSET UNITYSDK_OFFSET(0x1A07D620)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_SETCUSTOMTEAMFLAG_OFFSET UNITYSDK_OFFSET(0x1A080B30)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_STARTCAMERASWITCHBLEND_OFFSET UNITYSDK_OFFSET(0x1A07F520)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_TRYGETTAKEOVERINFO_OFFSET UNITYSDK_OFFSET(0x1A07DF10)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_TRYNORMALIZEOVERRIDEFORWARD_OFFSET UNITYSDK_OFFSET(0x1A081550)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_TRYRESOLVERESTOREBORNPOINT_OFFSET UNITYSDK_OFFSET(0x1A081170)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_TRYRESTOREORIGINALTEAM_OFFSET UNITYSDK_OFFSET(0x1A080AC0)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_TRYTAKEOVEREXISTINGENTITY_OFFSET UNITYSDK_OFFSET(0x1A07E4F0)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A07D090)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_VALIDATETAKEOVER_OFFSET UNITYSDK_OFFSET(0x1A07E910)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A081670)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A081690)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1A081720)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A0817B0)
#define MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A081840)

namespace MoleMole
{
	inline static constexpr unsigned int ExternalEntityTeamTakeoverSubsystem_TypeDefinitionIndex = 89137;

	class ExternalEntityTeamTakeoverSubsystem
	{
	public:
		// static const ::System::String* LogTag; // 0x0
		::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState* _state; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnEntityRemoved(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState* state, ::System::UInt32 removedEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_ONENTITYREMOVED_OFFSET))(this, state, removedEntityID);
		}

		::System::Void OnTeamReplaceCompleted(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState* state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState*))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_ONTEAMREPLACECOMPLETED_OFFSET))(this, state);
		}

		static ::System::Boolean IsTargetAlive(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState* state)
		{
			return ((::System::Boolean(*)(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState*))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_ISTARGETALIVE_OFFSET))(state);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean get_IsTakingOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_GET_ISTAKINGOVER_OFFSET))(this);
		}

		::MoleMole::EntityHandle get_TakenOverEntity()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_GET_TAKENOVERENTITY_OFFSET))(this);
		}

		::System::Int32 get_CurrentTakeoverGroupID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_GET_CURRENTTAKEOVERGROUPID_OFFSET))(this);
		}

		::System::Int32 get_CurrentTakeoverConfigID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_GET_CURRENTTAKEOVERCONFIGID_OFFSET))(this);
		}

		::HFAHKKFPHHM get_CurrentTakeoverType()
		{
			return ((::HFAHKKFPHHM(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_GET_CURRENTTAKEOVERTYPE_OFFSET))(this);
		}

		::System::Boolean TryGetTakeoverInfo(::System::UInt32& entityID, ::JGMDNACJOPD& phase)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::JGMDNACJOPD&))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_TRYGETTAKEOVERINFO_OFFSET))(this, entityID, phase);
		}

		::System::Void EnterTakeoverScope(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState* state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState*))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_ENTERTAKEOVERSCOPE_OFFSET))(this, state);
		}

		::System::Void ExitTakeoverScope(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState* state, ::INPKPAEBOLJ reason)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState*, ::INPKPAEBOLJ))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_EXITTAKEOVERSCOPE_OFFSET))(this, state, reason);
		}

		static ::INPKPAEBOLJ ResolveRestoreExitReason(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState* state)
		{
			return ((::INPKPAEBOLJ(*)(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState*))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_RESOLVERESTOREEXITREASON_OFFSET))(state);
		}

		static ::System::Void DispatchTakeoverNotify(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState* state, ::System::Boolean isTakenOver, ::INPKPAEBOLJ reason)
		{
			return ((::System::Void(*)(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState*, ::System::Boolean, ::INPKPAEBOLJ))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_DISPATCHTAKEOVERNOTIFY_OFFSET))(state, isTakenOver, reason);
		}

		::System::Boolean TryTakeOverExistingEntity(::System::UInt32 entityID, ::System::Single cameraYawOffset, ::DHFKBDFJDLI cameraYawReference, ::MoleMole::Cameras::CameraTrackBlending* overrideCameraSwitchBlend, ::System::Single overrideCameraElevation)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Single, ::DHFKBDFJDLI, ::MoleMole::Cameras::CameraTrackBlending*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_TRYTAKEOVEREXISTINGENTITY_OFFSET))(this, entityID, cameraYawOffset, cameraYawReference, overrideCameraSwitchBlend, overrideCameraElevation);
		}

		::System::Boolean TryRestoreOriginalTeam(::OBBFELCMLJM& overrides)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBBFELCMLJM&))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_TRYRESTOREORIGINALTEAM_OFFSET))(this, overrides);
		}

		::System::Boolean ValidateTakeover(::System::UInt32 entityID, ::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverTargets& targets)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverTargets&))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_VALIDATETAKEOVER_OFFSET))(this, entityID, targets);
		}

		::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState* BeginTakeover(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverTargets& targets)
		{
			return ((::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState*(*)(::PVOID, ::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverTargets&))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_BEGINTAKEOVER_OFFSET))(this, targets);
		}

		static ::System::Void StartCameraSwitchBlend(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverTargets& targets, ::System::Single cameraYawOffset, ::DHFKBDFJDLI cameraYawReference, ::MoleMole::Cameras::CameraTrackBlending* overrideCameraSwitchBlend, ::System::Single overrideCameraElevation)
		{
			return ((::System::Void(*)(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverTargets&, ::System::Single, ::DHFKBDFJDLI, ::MoleMole::Cameras::CameraTrackBlending*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_STARTCAMERASWITCHBLEND_OFFSET))(targets, cameraYawOffset, cameraYawReference, overrideCameraSwitchBlend, overrideCameraElevation);
		}

		static ::System::Void ApplyCameraAngleBeforeSwitch(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverTargets& targets, ::System::Single cameraYawOffset, ::DHFKBDFJDLI cameraYawReference, ::System::Single overrideCameraElevation)
		{
			return ((::System::Void(*)(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverTargets&, ::System::Single, ::DHFKBDFJDLI, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_APPLYCAMERAANGLEBEFORESWITCH_OFFSET))(targets, cameraYawOffset, cameraYawReference, overrideCameraElevation);
		}

		static ::System::Void RecreateTeamEntity(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverTargets& targets)
		{
			return ((::System::Void(*)(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverTargets&))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_RECREATETEAMENTITY_OFFSET))(targets);
		}

		static ::System::Void ApplyTakeoverToTarget(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverTargets& targets)
		{
			return ((::System::Void(*)(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverTargets&))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_APPLYTAKEOVERTOTARGET_OFFSET))(targets);
		}

		::System::Void ScheduleRestoreForLostTarget(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState* state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState*))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_SCHEDULERESTOREFORLOSTTARGET_OFFSET))(this, state);
		}

		::Cysharp::Threading::Tasks::UniTask RestoreOriginalTeamNextFrameAsync(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState* state)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState*))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_RESTOREORIGINALTEAMNEXTFRAMEASYNC_OFFSET))(this, state);
		}

		::System::Void RestoreOriginalTeam(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState* state, ::OBBFELCMLJM& overrides)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState*, ::OBBFELCMLJM&))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_RESTOREORIGINALTEAM_OFFSET))(this, state, overrides);
		}

		static ::System::Boolean TryResolveRestoreBornPoint(::GEIHCPAOKKK* targetModel, ::OBBFELCMLJM& overrides, ::UnityEngine::Vector3& bornPos, ::UnityEngine::Vector3& bornForward)
		{
			return ((::System::Boolean(*)(::GEIHCPAOKKK*, ::OBBFELCMLJM&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_TRYRESOLVERESTOREBORNPOINT_OFFSET))(targetModel, overrides, bornPos, bornForward);
		}

		static ::System::Void ApplyTakenOverEntityTransform(::GEIHCPAOKKK* targetModel, ::OBBFELCMLJM& overrides)
		{
			return ((::System::Void(*)(::GEIHCPAOKKK*, ::OBBFELCMLJM&))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_APPLYTAKENOVERENTITYTRANSFORM_OFFSET))(targetModel, overrides);
		}

		static ::System::Boolean TryNormalizeOverrideForward(::System::Nullable_1<::UnityEngine::Vector3> overrideForward, ::UnityEngine::Vector3& forward)
		{
			return ((::System::Boolean(*)(::System::Nullable_1<::UnityEngine::Vector3>, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_TRYNORMALIZEOVERRIDEFORWARD_OFFSET))(overrideForward, forward);
		}

		::System::Void FinishRestore(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState* state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState*))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_FINISHRESTORE_OFFSET))(this, state);
		}

		::System::Void ReleaseTakeover(::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState* state, ::INPKPAEBOLJ reason)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ExternalEntityTeamTakeoverSubsystem_TakeoverState*, ::INPKPAEBOLJ))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_RELEASETAKEOVER_OFFSET))(this, state, reason);
		}

		static ::System::Void SetCustomTeamFlag(::System::Boolean isCustomTeam)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_SETCUSTOMTEAMFLAG_OFFSET))(isCustomTeam);
		}

		static ::System::Void CloseQTEWindowIfOpened()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM_CLOSEQTEWINDOWIFOPENED_OFFSET))();
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::ENGKPGFGGLM* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXTERNALENTITYTEAMTAKEOVERSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
