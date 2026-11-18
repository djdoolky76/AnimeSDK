#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INMODDPDBNE.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/NBGELMBGLKD.h"
#include "unitysdk/NLOEGNJPDGE.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x1359D160)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_CLEARFOCUSTARGETDATA_OFFSET UNITYSDK_OFFSET(0x1359F410)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_CLEARLEVELPERFORMCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1359F3A0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCAMERAFOLLOWENTITYROTATIONYAW_OFFSET UNITYSDK_OFFSET(0x1359D770)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x1359F480)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCURFOCUSTARGETPOS_OFFSET UNITYSDK_OFFSET(0x1359F880)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_INITFOCUSDATA_OFFSET UNITYSDK_OFFSET(0x1359D050)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1359CF60)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1359D110)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1359D250)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_POPLEVELPERFORMCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1359E6E0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_POPLEVELPERFORMCAMERAFOCUSTARGETDATA_OFFSET UNITYSDK_OFFSET(0x1359DB80)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_PUSHLEVELPERFORMCAMERADATA_OFFSET UNITYSDK_OFFSET(0x1359E2A0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_PUSHLEVELPERFORMCAMERAFOCUSTARGETDATA_OFFSET UNITYSDK_OFFSET(0x1359D900)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_REFRESHFOCUSTARGETDATA_OFFSET UNITYSDK_OFFSET(0x1359DD40)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_REFRESHLEVELPERFORMCAMERA_OFFSET UNITYSDK_OFFSET(0x1359E8A0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_REFRESHOVERSHOULDERCAMERAFOCUSTARGETINFO_OFFSET UNITYSDK_OFFSET(0x1359D490)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_SETLEVELPERFORMCAMERAPITCHYAW_OFFSET UNITYSDK_OFFSET(0x1359D620)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_TICKLEVELPERFORMCAMERACHECK_OFFSET UNITYSDK_OFFSET(0x1359D2B0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_TICKLEVELPERFORMCAMERAFOCUSCHECK_OFFSET UNITYSDK_OFFSET(0x1359D3A0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1359FDD0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1359FDF0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1359FE80)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1359FF10)

namespace MoleMole
{
	inline static constexpr unsigned int LevelPerformCameraSubSystem_TypeDefinitionIndex = 64201;

	class LevelPerformCameraSubSystem
	{
	public:
		// static const ::System::Single DEFAULT_FOLLOW_ENTITY_OVERRIDE_HEIGHT; // 0x0
		// static const ::System::Single DEFAULT_FOCUS_DAMPING_SPEED; // 0x0
		// static const ::System::Single DEFAULT_FOCUS_BACKUP_PROTECTION_DISTANCE; // 0x0
		// static const ::System::Single DEFAULT_FOCUS_PROTECTION_OFFSET_SCALE; // 0x0
		::System::Collections::Generic::List_1<::INMODDPDBNE>* _focusTargetDataList; // 0x10
		::System::Collections::Generic::List_1<::NLOEGNJPDGE>* _levelPerformCameraDataList; // 0x18
		::MoleMole::Cameras::ScopedOverShoulderCamera* _scopedOverShoulderCamera; // 0x20
		::GEIHCPAOKKK* _cachedOverrideFollowModelComp; // 0x28
		::UnityEngine::Transform* _cachedFocusTransform; // 0x30
		::GEIHCPAOKKK* _cachedFocusModelComp; // 0x38
		::MoleMole::EntityHandle _cachedOverrideFollowEntity; // 0x40
		::MoleMole::EntityHandle _cachedFocusEntity; // 0x50
		::UnityEngine::Vector3 _cachedLastFocusTargetPos; // 0x60
		::System::Boolean _isFollowEntityOverride; // 0x6C
		::System::Boolean _isInFocusTargetMode; // 0x6D
		::System::Byte _padding0[0x2];
		::System::Single _cachedFocusDampingSpeed; // 0x70
		::UnityEngine::Vector3 _lastCameraFollowPosition; // 0x74
		::System::Single _cachedFocusViewRatio; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void SetLevelPerformCameraPitchYaw(::System::Boolean setPitch, ::System::Single pitch, ::System::Boolean setYaw, ::System::Single yaw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_SETLEVELPERFORMCAMERAPITCHYAW_OFFSET))(this, setPitch, pitch, setYaw, yaw);
		}

		::System::Void PushLevelPerformCameraFocusTargetData(::System::String* tag, ::System::UInt32 focusEntityID, ::System::String* focusEntityAttachPoint, ::UnityEngine::Vector3 focusWorldPos, ::System::Single dampingSpeed, ::System::Single viewRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_PUSHLEVELPERFORMCAMERAFOCUSTARGETDATA_OFFSET))(this, tag, focusEntityID, focusEntityAttachPoint, focusWorldPos, dampingSpeed, viewRatio);
		}

		::System::Void PopLevelPerformCameraFocusTargetData(::System::String* tag, ::System::Boolean needRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_POPLEVELPERFORMCAMERAFOCUSTARGETDATA_OFFSET))(this, tag, needRefresh);
		}

		::System::Void PushLevelPerformCameraData(::System::String* tag, ::System::String* baseConfigKey, ::System::String* overrideConfigKey, ::System::Boolean enableInitAimTarget, ::UnityEngine::Vector3 initAimTargetPos, ::System::Boolean enableInitPitch, ::System::Single initPitch, ::System::Boolean enableInitYaw, ::System::Single initYaw, ::System::Boolean useWorldCoordYaw, ::System::UInt32 followEntityID, ::NBGELMBGLKD cameraModePriority, ::NBGELMBGLKD cameraCollisionPriority)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::UInt32, ::NBGELMBGLKD, ::NBGELMBGLKD))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_PUSHLEVELPERFORMCAMERADATA_OFFSET))(this, tag, baseConfigKey, overrideConfigKey, enableInitAimTarget, initAimTargetPos, enableInitPitch, initPitch, enableInitYaw, initYaw, useWorldCoordYaw, followEntityID, cameraModePriority, cameraCollisionPriority);
		}

		::System::Void PopLevelPerformCameraData(::System::String* tag, ::System::Boolean needRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_POPLEVELPERFORMCAMERADATA_OFFSET))(this, tag, needRefresh);
		}

		::System::Void ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_CLEARDATA_OFFSET))(this);
		}

		::System::Void ClearLevelPerformCameraData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_CLEARLEVELPERFORMCAMERADATA_OFFSET))(this);
		}

		::System::Void ClearFocusTargetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_CLEARFOCUSTARGETDATA_OFFSET))(this);
		}

		::System::Void TickLevelPerformCameraCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_TICKLEVELPERFORMCAMERACHECK_OFFSET))(this);
		}

		::System::Void TickLevelPerformCameraFocusCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_TICKLEVELPERFORMCAMERAFOCUSCHECK_OFFSET))(this);
		}

		::System::Void RefreshLevelPerformCamera(::System::Boolean fromPop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_REFRESHLEVELPERFORMCAMERA_OFFSET))(this, fromPop);
		}

		::UnityEngine::Vector3 GetCameraMoveFollowPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET))(this);
		}

		::System::Single GetCameraFollowEntityRotationYaw()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCAMERAFOLLOWENTITYROTATIONYAW_OFFSET))(this);
		}

		::System::Void InitFocusData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_INITFOCUSDATA_OFFSET))(this);
		}

		::System::Void RefreshFocusTargetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_REFRESHFOCUSTARGETDATA_OFFSET))(this);
		}

		::System::Void RefreshOverShoulderCameraFocusTargetInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_REFRESHOVERSHOULDERCAMERAFOCUSTARGETINFO_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCurFocusTargetPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCURFOCUSTARGETPOS_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
