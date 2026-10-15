#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAvatarUltraSkillEnergyFlyEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class OIEAECJBMNO;
class PMBOJEOJFAM;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace UnityEngine { class Camera; }

#define PMBOJEOJFAM_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0xC3154C0)
#define PMBOJEOJFAM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC3150A0)
#define PMBOJEOJFAM_CBALMFOKFBH_OFFSET UNITYSDK_OFFSET(0xC3153A0)
#define PMBOJEOJFAM_CTOR_OFFSET UNITYSDK_OFFSET(0xC315270)
#define PMBOJEOJFAM_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xC315570)
#define PMBOJEOJFAM_HAFHEJANLCC_OFFSET UNITYSDK_OFFSET(0xC3153F0)
#define PMBOJEOJFAM_MOBDIGFMJCI_OFFSET UNITYSDK_OFFSET(0xC315280)
#define PMBOJEOJFAM_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xC315580)

	class PMBOJEOJFAM : public ::System::Object
	{
	public:
		::System::Action* EGMGFMKIOHL; // 0x10
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
		::UnityEngine::Vector3 GIPGGGGKAMF; // 0x20
		::System::Single BPMNMDJIPLE; // 0x2C
		::UnityEngine::Vector3 LCMLDNAIIMJ; // 0x30
		::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType _EffectType_k__BackingField; // 0x3C
		::UnityEngine::Vector3 GJICDLCNOEA; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBOJEOJFAM_CTOR_OFFSET))(this);
		}

		static ::PMBOJEOJFAM* BPLPBPMEODA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Camera* a5)
		{
			return ((::PMBOJEOJFAM*(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PMBOJEOJFAM_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void MOBDIGFMJCI(::UnityEngine::Vector3 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PMBOJEOJFAM_MOBDIGFMJCI_OFFSET))(this, a1, a2);
		}

		::System::Void CBALMFOKFBH(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PMBOJEOJFAM_CBALMFOKFBH_OFFSET))(this, a1);
		}

		::System::Boolean HAFHEJANLCC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PMBOJEOJFAM_HAFHEJANLCC_OFFSET))(this, a1);
		}

		::OIEAECJBMNO* AKJABINEGDJ()
		{
			return ((::OIEAECJBMNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBOJEOJFAM_AKJABINEGDJ_OFFSET))(this);
		}

		::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType get_EffectType()
		{
			return ((::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBOJEOJFAM_GET_EFFECTTYPE_OFFSET))(this);
		}

		::System::Void set_EffectType(::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType))((::PBYTE)hIl2Cpp + PMBOJEOJFAM_SET_EFFECTTYPE_OFFSET))(this, a1);
		}

	};
