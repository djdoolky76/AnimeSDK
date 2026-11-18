#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BECEFPIOGFF.h"
#include "unitysdk/LGKJFOFLBFG.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class CLEAIDMKLEA;
class FIHCLCMNKNN;
class OMMFLPNFNIL;
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_CHECKSUMMONCONTROLVALID_OFFSET UNITYSDK_OFFSET(0x1A7211D0)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_COATTACKSUMMONFINISH_OFFSET UNITYSDK_OFFSET(0x1A720F60)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_COATTACKSUMMONSTART_OFFSET UNITYSDK_OFFSET(0x1A720C80)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_DOSWITCHOUTSUMMONCONTROL_OFFSET UNITYSDK_OFFSET(0x1A71F9C0)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_GETSUMMONCONTROLENTITYBYAVATARID_OFFSET UNITYSDK_OFFSET(0x1A71C7C0)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ISCURRENTSUMMONCONTROLMASTER_OFFSET UNITYSDK_OFFSET(0x1A71C6D0)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ISSUMMONCONTROLENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1A71C520)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ISSUMMONCONTROLINSTAGE_OFFSET UNITYSDK_OFFSET(0x1A71C680)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A71B4E0)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A71B810)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A71C4B0)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ONPREBIGSCENETELEPORTBYRELOAD_OFFSET UNITYSDK_OFFSET(0x1A721860)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ONPREHOTLOADENTITY_OFFSET UNITYSDK_OFFSET(0x1A7214E0)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A71C0B0)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_REGISTERSUMMONCONTROL_OFFSET UNITYSDK_OFFSET(0x1A71CAA0)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_SETINPUTENABLESTATE_OFFSET UNITYSDK_OFFSET(0x1A71BCC0)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_SWITCHINSUMMONCONTROLBYAIDATTACK_OFFSET UNITYSDK_OFFSET(0x1A71DBB0)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_SWITCHINSUMMONCONTROL_OFFSET UNITYSDK_OFFSET(0x1A71E380)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_SWITCHOUTSUMMONCONTROL_OFFSET UNITYSDK_OFFSET(0x1A71D310)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_TICKSUMMONCONTROLGUARD_OFFSET UNITYSDK_OFFSET(0x1A71C100)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_TRYSWITCHMASTERTOLOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x1A720590)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_UNREGISTERALLSUMMONCONTROL_OFFSET UNITYSDK_OFFSET(0x1A721530)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM_UNREGISTERSUMMONCONTROL_OFFSET UNITYSDK_OFFSET(0x1A71D110)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A721A50)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A721A70)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A721B00)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM___BASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A721B90)
#define MOLEMOLE_SUMMONCONTROLSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A721C30)

namespace MoleMole
{
	inline static constexpr unsigned int SummonControlSubSystem_TypeDefinitionIndex = 52910;

	class SummonControlSubSystem
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::EntityHandle, ::CLEAIDMKLEA*>* _summonControlInfoDict; // 0x10
		::MoleMole::EntityHandle _localMasterEntity; // 0x18
		::MoleMole::EntityHandle _localControlSummonEntity; // 0x28
		::BECEFPIOGFF _curSummonControlState; // 0x38
		::System::Int32 _overrideControlEntityVersion; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Boolean IsSummonControlEntityReady(::MoleMole::EntityHandle entity, ::System::Boolean ignoreMasterCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ISSUMMONCONTROLENTITYREADY_OFFSET))(this, entity, ignoreMasterCheck);
		}

		::System::Boolean IsSummonControlInStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ISSUMMONCONTROLINSTAGE_OFFSET))(this);
		}

		::System::Boolean IsCurrentSummonControlMaster(::MoleMole::EntityHandle entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ISCURRENTSUMMONCONTROLMASTER_OFFSET))(this, entity);
		}

		::MoleMole::EntityHandle GetSummonControlEntityByAvatarID(::System::Int32 avatarID, ::MoleMole::EntityHandle caster)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_GETSUMMONCONTROLENTITYBYAVATARID_OFFSET))(this, avatarID, caster);
		}

		::System::Void RegisterSummonControl(::MoleMole::EntityHandle summonEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_REGISTERSUMMONCONTROL_OFFSET))(this, summonEntity);
		}

		::System::Void UnregisterSummonControl(::MoleMole::EntityHandle summonEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_UNREGISTERSUMMONCONTROL_OFFSET))(this, summonEntity);
		}

		::System::Void SwitchInSummonControlByAidAttack(::FIHCLCMNKNN* switchAvatarComponent, ::OMMFLPNFNIL* curAidAttackConfig)
		{
			return ((::System::Void(*)(::PVOID, ::FIHCLCMNKNN*, ::OMMFLPNFNIL*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_SWITCHINSUMMONCONTROLBYAIDATTACK_OFFSET))(this, switchAvatarComponent, curAidAttackConfig);
		}

		::System::Void SwitchInSummonControl(::MoleMole::EntityHandle summonEntity, ::System::Int32 switchInIndex, ::System::Int32 switchOutIndex, ::MoleMole::Config::ConfigPosRot* switchInPosRot, ::System::String* lockTargetID, ::System::Single overrideFadeInTime, ::System::Single overrideFadeOutTime, ::System::Boolean forceUseLineSelectSwitchInPos, ::LGKJFOFLBFG switchType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Int32, ::System::Int32, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::System::Single, ::System::Single, ::System::Boolean, ::LGKJFOFLBFG))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_SWITCHINSUMMONCONTROL_OFFSET))(this, summonEntity, switchInIndex, switchOutIndex, switchInPosRot, lockTargetID, overrideFadeInTime, overrideFadeOutTime, forceUseLineSelectSwitchInPos, switchType);
		}

		::System::Void SwitchOutSummonControl(::MoleMole::EntityHandle summonEntity, ::System::Boolean isInstantSwitchOut, ::System::Boolean isSwitchInKeepPosRot, ::System::Int32 switchInIndex, ::System::Int32 switchOutIndex, ::MoleMole::Config::ConfigPosRot* switchInPosRot, ::System::String* lockTargetID, ::System::Single overrideFadeInTime, ::System::Single overrideFadeOutTime, ::System::Boolean switchToMasterEntity, ::LGKJFOFLBFG cameraSwitchType, ::System::Boolean ignoreCameraFollowSwitch, ::System::Boolean ignoreInputSwitch, ::System::Boolean forceSwitchToMasterWhenNotInSummonControl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::System::Single, ::System::Single, ::System::Boolean, ::LGKJFOFLBFG, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_SWITCHOUTSUMMONCONTROL_OFFSET))(this, summonEntity, isInstantSwitchOut, isSwitchInKeepPosRot, switchInIndex, switchOutIndex, switchInPosRot, lockTargetID, overrideFadeInTime, overrideFadeOutTime, switchToMasterEntity, cameraSwitchType, ignoreCameraFollowSwitch, ignoreInputSwitch, forceSwitchToMasterWhenNotInSummonControl);
		}

		::System::Boolean DoSwitchOutSummonControl(::MoleMole::EntityHandle summonEntity, ::System::Boolean isInstantSwitchOut, ::System::Boolean isSwitchInKeepPosRot, ::System::Int32 switchInIndex, ::System::Int32 switchOutIndex, ::MoleMole::Config::ConfigPosRot* switchInPosRot, ::System::String* lockTargetID, ::System::Single overrideFadeInTime, ::System::Single overrideFadeOutTime, ::System::Boolean switchToMasterEntity, ::LGKJFOFLBFG cameraSwitchType, ::System::Boolean ignoreCameraFollowSwitch, ::System::Boolean ignoreInputSwitch)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::System::Single, ::System::Single, ::System::Boolean, ::LGKJFOFLBFG, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_DOSWITCHOUTSUMMONCONTROL_OFFSET))(this, summonEntity, isInstantSwitchOut, isSwitchInKeepPosRot, switchInIndex, switchOutIndex, switchInPosRot, lockTargetID, overrideFadeInTime, overrideFadeOutTime, switchToMasterEntity, cameraSwitchType, ignoreCameraFollowSwitch, ignoreInputSwitch);
		}

		::System::Void CoAttackSummonStart(::MoleMole::EntityHandle summonEntity, ::MoleMole::Config::ConfigPosRot* targetPosRot, ::System::String* lockTargetID, ::System::Int32 switchInIndex, ::System::Single overrideMaxSwitchPositionSearchDistance, ::System::Boolean instantSwitchIn)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_COATTACKSUMMONSTART_OFFSET))(this, summonEntity, targetPosRot, lockTargetID, switchInIndex, overrideMaxSwitchPositionSearchDistance, instantSwitchIn);
		}

		::System::Void CoAttackSummonFinish(::MoleMole::EntityHandle summonEntity, ::System::Int32 switchOutIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_COATTACKSUMMONFINISH_OFFSET))(this, summonEntity, switchOutIndex);
		}

		::System::Boolean TrySwitchMasterToLocalAvatar(::FIHCLCMNKNN* switchAvatarComponent, ::CLEAIDMKLEA* info, ::MoleMole::EntityHandle switchAnchorEntity, ::System::Boolean isSwitchInKeepPosRot, ::System::Int32 switchInIndex, ::MoleMole::Config::ConfigPosRot* switchInPosRot, ::System::String* lockTargetID, ::System::Single overrideFadeInTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIHCLCMNKNN*, ::CLEAIDMKLEA*, ::MoleMole::EntityHandle, ::System::Boolean, ::System::Int32, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_TRYSWITCHMASTERTOLOCALAVATAR_OFFSET))(this, switchAvatarComponent, info, switchAnchorEntity, isSwitchInKeepPosRot, switchInIndex, switchInPosRot, lockTargetID, overrideFadeInTime);
		}

		::System::Void TickSummonControlGuard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_TICKSUMMONCONTROLGUARD_OFFSET))(this);
		}

		::System::Boolean CheckSummonControlValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_CHECKSUMMONCONTROLVALID_OFFSET))(this);
		}

		::System::Void SetInputEnableState(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_SETINPUTENABLESTATE_OFFSET))(this, isEnable);
		}

		::System::Void OnPreHotLoadEntity(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ONPREHOTLOADENTITY_OFFSET))(this, args);
		}

		::System::Void OnPreBigSceneTeleportByReload(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_ONPREBIGSCENETELEPORTBYRELOAD_OFFSET))(this, args);
		}

		::System::Void UnregisterAllSummonControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM_UNREGISTERALLSUMMONCONTROL_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM___BASE_ONLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMONCONTROLSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
