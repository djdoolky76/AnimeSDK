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

#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xF05C1D0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_CCTOR_OFFSET UNITYSDK_OFFSET(0xF05D580)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0xF05AF80)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF05AFC0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ENABLETARGETHUDMINI_OFFSET UNITYSDK_OFFSET(0xF05BE90)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ENABLETARGETHUD_OFFSET UNITYSDK_OFFSET(0xF05C030)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_GET_ISSHOWPHASE_OFFSET UNITYSDK_OFFSET(0xF05D560)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xF05B540)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xF05BC00)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xF05BDF0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_REMOVEMODIFIER_OFFSET UNITYSDK_OFFSET(0xF05C230)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETHPINFOVISIBLE_OFFSET UNITYSDK_OFFSET(0xF05C2F0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETSHOWPHASE_OFFSET UNITYSDK_OFFSET(0xF05C3B0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SETSTANCETOBEEMPTY_OFFSET UNITYSDK_OFFSET(0xF05BE40)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_SET_ISSHOWPHASE_OFFSET UNITYSDK_OFFSET(0xF05D570)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xF05C420)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT_UPDATEMODIFIERNUMBERS_OFFSET UNITYSDK_OFFSET(0xF05C290)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__NOTIFYHPSHAREDSUBDIRTYHPCHANGE_OFFSET UNITYSDK_OFFSET(0xF05C690)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYBEINGSTANCECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0xF05CE80)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYCHARACTERMODELCHANGE_OFFSET UNITYSDK_OFFSET(0xF05D420)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYDAMAGEPERFORMFINISH_OFFSET UNITYSDK_OFFSET(0xF05D380)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONABILITYSKILLPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0xF05D4D0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONCOOLDOWNCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xF05CF20)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONDIRTYHPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xF05C5F0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYDYINGEVENT_BATTLEEVENT_OFFSET UNITYSDK_OFFSET(0xF05D140)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYDYINGEVENT_OFFSET UNITYSDK_OFFSET(0xF05D0B0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYESCAPEEVENT_OFFSET UNITYSDK_OFFSET(0xF05D2E0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONENTITYREVIVEEVENT_OFFSET UNITYSDK_OFFSET(0xF05D1D0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONHPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xF05C480)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONRALLYHPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xF05CD40)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xF05C4D0)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSPECIALSPCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xF05C560)
#define RPG_GAMECORE_CHARACTERHUDCOMPONENT__ONSTANCECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xF05CDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterHudComponent_TypeDefinitionIndex = 58407;

	class CharacterHudComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::BattleGamePhase* _BattlePhase; // 0x18
		::UnityEngine::AnimationState* _LoopOutlineAnimState; // 0x20
		::UnityEngine::Animation* _RootAnimation; // 0x28
		::RPG::GameCore::TurnBasedAbilityComponent* _turnBasedAbilityRef; // 0x30
		::RPG::GameCore::CharacterModelComponent* _ModelComponentRef; // 0x38
		::System::Boolean _IsShowPhase_k__BackingField; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single _LastDamageTextTimeStamp; // 0x44
		::UnityEngine::Vector3 _OffsetBase; // 0x48
		::UnityEngine::Vector3 _LastDamageTextOffset; // 0x54
		static ::RPG::Client::RPGProfilerMarker** StaticGet__EnableTargetHudMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.GameCore", "CharacterHudComponent")->GetStaticField(0x67AF0);
		}

		static ::System::Int32* StaticGet_sIsSpAddHash()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.GameCore", "CharacterHudComponent")->GetStaticField(0x14D60);
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
