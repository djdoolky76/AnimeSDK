#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_ForceSpecialCameraLockType.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_SteerDirection.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_TargetType.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneLockTarget_ZoneSteerType.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class JOOHBDMHGCA;
class NLNIIPDCABP;
class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CHECKBATTLEAREA_OFFSET UNITYSDK_OFFSET(0x11E7B570)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CHECKSWITCHLOCKLOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x11E7B150)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x11E7B4E0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ENTERHANDLEFORCESPECIALCAMERALOCK_OFFSET UNITYSDK_OFFSET(0x11E785F0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_EXITHANDLEFORCESPECIALCAMERALOCK_OFFSET UNITYSDK_OFFSET(0x11E791F0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_GETENTITYINPUTROTSPEED_OFFSET UNITYSDK_OFFSET(0x11E7AE90)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x11E77470)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONINIT_OFFSET UNITYSDK_OFFSET(0x11E77480)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11E792C0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x11E77530)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11E78AF0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_PROCESSCAMRELOCK_OFFSET UNITYSDK_OFFSET(0x11E786B0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_SETROOTMOTIONROTATIONMUTED_OFFSET UNITYSDK_OFFSET(0x11E78430)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_TICKLOCKTARGETROTATE_OFFSET UNITYSDK_OFFSET(0x11E796D0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x11E7B6B0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x11E7B6D0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONINIT_OFFSET UNITYSDK_OFFSET(0x11E7B7A0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11E7B830)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x11E7B8F0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11E7B9A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_TypeDefinitionIndex = 88935;

	class AnimatorZoneLockTarget : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* SelfForwardAttachPoint; // 0x50
		::UnityEngine::AnimationCurve* CurveRotateSpeed; // 0x58
		::UnityEngine::AnimationCurve* AngleOffsetCurve; // 0x60
		::System::String* BackUpLockTargetID; // 0x68
		::UnityEngine::AnimationCurve* curveRotateSpeed; // 0x70
		::System::String* LockTargetID; // 0x78
		::System::String* CameraLockModeID; // 0x80
		::MoleMole::Config::ConfigPosRot* configPosRot; // 0x88
		::MoleMole::Config::AnimatorZoneLockTarget_ForceSpecialCameraLockType ForceSpecialCameraLock; // 0x90
		::System::Boolean ApplyRotateSpeedZone; // 0x94
		::System::Boolean UseJoystickSteerPreferred; // 0x95
		::System::Boolean MouseModeLockCameraRotation; // 0x96
		::System::Boolean enableTickConfigPosRot; // 0x97
		::System::Boolean AllowRootMotionRotation; // 0x98
		::System::Boolean MuteCamLock; // 0x99
		::System::Boolean ForceReselectLockTarget; // 0x9A
		::System::Byte _padding0[0x1];
		::MoleMole::Config::AnimatorZoneLockTarget_TargetType LockTargetType; // 0x9C
		::MoleMole::Config::AnimatorZoneLockTarget_ZoneSteerType steerType; // 0xA0
		::System::Single RotateSpeedRatio; // 0xA4
		::MoleMole::Config::AnimatorZoneLockTarget_SteerDirection steerDirectionType; // 0xA8
		::System::Boolean ForceIgnoreAISelectTarget; // 0xAC
		::System::Boolean CamReLockWhenLockingSameTarget; // 0xAD
		::System::Boolean IgnoreJoystickSteerWhenRotSpeedZero; // 0xAE
		::System::Boolean NeedLockTargetOnZoneEnter; // 0xAF

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::Void OnInit(::NLNIIPDCABP* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONINIT_OFFSET))(this, animatorComponent);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Single GetEntityInputRotSpeed(::MoleMole::Battle::Entity* entity, ::JOOHBDMHGCA* movementComponent, ::System::Boolean applyRatio)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*, ::JOOHBDMHGCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_GETENTITYINPUTROTSPEED_OFFSET))(this, entity, movementComponent, applyRatio);
		}

		::System::Void TickLockTargetRotate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo curStateInfo, ::System::Boolean& isLockZoneRotate)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_TICKLOCKTARGETROTATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo, isLockZoneRotate);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Boolean CheckSwitchLockLocalAvatar(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CHECKSWITCHLOCKLOCALAVATAR_OFFSET))(this, entity);
		}

		::System::Void ProcessCamReLock(::MoleMole::Battle::Entity* self, ::MGHNAPKHBOG target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_PROCESSCAMRELOCK_OFFSET))(this, self, target);
		}

		::System::Void SetRootMotionRotationMuted(::MoleMole::Battle::Entity* entity, ::System::Boolean isMute)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_SETROOTMOTIONROTATIONMUTED_OFFSET))(this, entity, isMute);
		}

		::System::Void EnterHandleForceSpecialCameraLock(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_ENTERHANDLEFORCESPECIALCAMERALOCK_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void ExitHandleForceSpecialCameraLock(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_EXITHANDLEFORCESPECIALCAMERALOCK_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Boolean CheckBattleArea(::MoleMole::Battle::Entity* selfEntity, ::MoleMole::Battle::Entity* monsterEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET_CHECKBATTLEAREA_OFFSET))(this, selfEntity, monsterEntity);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnInit(::NLNIIPDCABP* P0)
		{
			return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONINIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOCKTARGET___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
