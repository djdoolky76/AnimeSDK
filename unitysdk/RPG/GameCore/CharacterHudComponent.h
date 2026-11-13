#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKFMIDBJDIA;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class AbilityDirtyHPChange; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }

#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ADDMODIFIER_OFFSET UNITYSDK_OFFSET(0x1AE7EB70)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE7FF20)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1AE7D920)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE7D960)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ENABLETARGETHUDMINI_OFFSET UNITYSDK_OFFSET(0x1AE7E830)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ENABLETARGETHUD_OFFSET UNITYSDK_OFFSET(0x1AE7E9D0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_GET_ISSHOWPHASE_OFFSET UNITYSDK_OFFSET(0x1AE7FF00)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1AE7DEE0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x1AE7E5A0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1AE7E790)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_REMOVEMODIFIER_OFFSET UNITYSDK_OFFSET(0x1AE7EBD0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETHPINFOVISIBLE_OFFSET UNITYSDK_OFFSET(0x1AE7EC90)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETSHOWPHASE_OFFSET UNITYSDK_OFFSET(0x1AE7ED50)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETSTANCETOBEEMPTY_OFFSET UNITYSDK_OFFSET(0x1AE7E7E0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SET_ISSHOWPHASE_OFFSET UNITYSDK_OFFSET(0x1AE7FF10)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0x1AE7EDC0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_UPDATEMODIFIERNUMBERS_OFFSET UNITYSDK_OFFSET(0x1AE7EC30)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__NOTIFYHPSHAREDSUBDIRTYHPCHANGE_OFFSET UNITYSDK_OFFSET(0x1AE7F030)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYBEINGSTANCECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1AE7F820)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYCHARACTERMODELCHANGE_OFFSET UNITYSDK_OFFSET(0x1AE7FDC0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYDAMAGEPERFORMFINISH_OFFSET UNITYSDK_OFFSET(0x1AE7FD20)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYSKILLPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x1AE7FE70)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONCOOLDOWNCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x1AE7F8C0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONDIRTYHPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x1AE7EF90)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYDYINGEVENT_BATTLEEVENT_OFFSET UNITYSDK_OFFSET(0x1AE7FAE0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYDYINGEVENT_OFFSET UNITYSDK_OFFSET(0x1AE7FA50)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYESCAPEEVENT_OFFSET UNITYSDK_OFFSET(0x1AE7FC80)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYREVIVEEVENT_OFFSET UNITYSDK_OFFSET(0x1AE7FB70)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONHPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x1AE7EE20)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONRALLYHPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x1AE7F6E0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x1AE7EE70)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSPECIALSPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x1AE7EF00)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSTANCECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x1AE7F790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterHudComponent_TypeDefinitionIndex = 58407;

	class CharacterHudComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::UnityEngine::Animation* _RootAnimation; // 0x18
		::UnityEngine::AnimationState* _LoopOutlineAnimState; // 0x20
		::RPG::GameCore::CharacterModelComponent* _ModelComponentRef; // 0x28
		::RPG::GameCore::TurnBasedAbilityComponent* _turnBasedAbilityRef; // 0x30
		::RPG::Client::BattleGamePhase* _BattlePhase; // 0x38
		::System::Boolean _IsShowPhase_k__BackingField; // 0x40
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 _LastDamageTextOffset; // 0x44
		::System::Single _LastDamageTextTimeStamp; // 0x50
		::UnityEngine::Vector3 _OffsetBase; // 0x54
		static ::RPG::Client::RPGProfilerMarker** StaticGet__EnableTargetHudMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.GameCore", "CharacterHudComponent")->GetStaticField(0x68B60);
		}

		static ::System::Int32* StaticGet_sIsSpAddHash()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.GameCore", "CharacterHudComponent")->GetStaticField(0x14A30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::CharacterModelComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterModelComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_INITCOMPONENT_OFFSET))(this, a1, a2);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void SetStanceToBeEmpty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETSTANCETOBEEMPTY_OFFSET))(this, a1);
		}

		::System::Void EnableTargetHudMini(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_ENABLETARGETHUDMINI_OFFSET))(this, a1);
		}

		::System::Void EnableTargetHud(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_ENABLETARGETHUD_OFFSET))(this, a1);
		}

		::System::Void AddModifier(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_ADDMODIFIER_OFFSET))(this, a1);
		}

		::System::Void RemoveModifier(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_REMOVEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void UpdateModifierNumbers(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_UPDATEMODIFIERNUMBERS_OFFSET))(this, a1);
		}

		::System::Void SetHPInfoVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETHPINFOVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SetShowPhase(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETSHOWPHASE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnHPChangeEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONHPCHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnSPChangeEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSPCHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnSpecialSPChangeEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSPECIALSPCHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnDirtyHPChangeEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONDIRTYHPCHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _NotifyHpSharedSubDirtyHPChange(::RPG::GameCore::AbilityDirtyHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityDirtyHPChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__NOTIFYHPSHAREDSUBDIRTYHPCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnRallyHPChangeEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONRALLYHPCHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnStanceChangeEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSTANCECHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnAbilityBeingStanceCountDown(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYBEINGSTANCECOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void _OnCoolDownChangeEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONCOOLDOWNCHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnEntityDyingEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYDYINGEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnEntityDyingEvent_BattleEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYDYINGEVENT_BATTLEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnEntityReviveEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYREVIVEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnEntityEscapeEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYESCAPEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnAbilityDamagePerformFinish(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYDAMAGEPERFORMFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnAbilityCharacterModelChange(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYCHARACTERMODELCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnAbilitySkillPropertyChange(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYSKILLPROPERTYCHANGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_GET_ISSHOWPHASE_OFFSET))(this);
		}

		::System::Void set_IsShowPhase(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHUDCOMPONENT_SET_ISSHOWPHASE_OFFSET))(this, a1);
		}

	};
}
