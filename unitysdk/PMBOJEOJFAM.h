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

#define PMBOJEOJFAM_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0xC30DBF0)
#define PMBOJEOJFAM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC30D370)
#define PMBOJEOJFAM_CBALMFOKFBH_OFFSET UNITYSDK_OFFSET(0xC30D660)
#define PMBOJEOJFAM_CTOR_OFFSET UNITYSDK_OFFSET(0xC30DCC0)
#define PMBOJEOJFAM_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xC30DCA0)
#define PMBOJEOJFAM_HAFHEJANLCC_OFFSET UNITYSDK_OFFSET(0xC30DB20)
#define PMBOJEOJFAM_MOBDIGFMJCI_OFFSET UNITYSDK_OFFSET(0xC30D540)
#define PMBOJEOJFAM_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xC30DCB0)

inline static constexpr unsigned int PMBOJEOJFAM_TypeDefinitionIndex = 71474;

	class PMBOJEOJFAM : public ::System::Object
	{
	public:
		::System::Action* EGMGFMKIOHL; // 0x10
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
		::RPG::GameCore::BattleAvatarUltraSkillEnergyFlyEffectType _EffectType_k__BackingField; // 0x20
		::UnityEngine::Vector3 LCMLDNAIIMJ; // 0x24
		::UnityEngine::Vector3 GIPGGGGKAMF; // 0x30
		::UnityEngine::Vector3 GJICDLCNOEA; // 0x3C
		::System::Single BPMNMDJIPLE; // 0x48
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
