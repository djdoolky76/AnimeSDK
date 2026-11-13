#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDENDNDOFLF.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureSkillCharacterComponent; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TransformComponent; }

#define KGGJDCENDHA_ACBFJLICJHF_OFFSET UNITYSDK_OFFSET(0x19772860)
#define KGGJDCENDHA_CTOR_OFFSET UNITYSDK_OFFSET(0x19771DA0)
#define KGGJDCENDHA_FDKEHBDDNGC_OFFSET UNITYSDK_OFFSET(0x19771FA0)
#define KGGJDCENDHA_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x197739E0)
#define KGGJDCENDHA_GHKFOBIDANI_OFFSET UNITYSDK_OFFSET(0x19773490)
#define KGGJDCENDHA_GLAIKMDAMBC_OFFSET UNITYSDK_OFFSET(0x197736F0)
#define KGGJDCENDHA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x19771F40)
#define KGGJDCENDHA_IDJBJOLAKFP_OFFSET UNITYSDK_OFFSET(0x19772C40)
#define KGGJDCENDHA_IGNOBMCOFKP_OFFSET UNITYSDK_OFFSET(0x19772D20)
#define KGGJDCENDHA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19773590)
#define KGGJDCENDHA_LICLBMEDGJM_OFFSET UNITYSDK_OFFSET(0x19772680)
#define KGGJDCENDHA_LOPFOGPLFOO_OFFSET UNITYSDK_OFFSET(0x197727A0)
#define KGGJDCENDHA_MCMOCNGAGAC_OFFSET UNITYSDK_OFFSET(0x19772040)
#define KGGJDCENDHA_PEKCJNHKNAD_OFFSET UNITYSDK_OFFSET(0x19773510)

inline static constexpr unsigned int KGGJDCENDHA_TypeDefinitionIndex = 58270;

	class KGGJDCENDHA : public ::BDENDNDOFLF
	{
	public:
		::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x68
		::RPG::GameCore::AdventureAbilityComponent* POLIHAMFHCI; // 0x70
		::RPG::GameCore::NPCComponent* KDJMBIPEAFM; // 0x78
		::RPG::GameCore::CharacterVisibleComponent* JAOPNEJFELA; // 0x80
		::RPG::GameCore::AdventureSkillCharacterComponent* KKANBKCEJEF; // 0x88
		::RPG::Client::AdventurePhase* BLAFNEBDBCH; // 0x90
		::System::Single AKGFBENBNFI; // 0x98
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x9C
		::System::Boolean DIMECBLLOGB; // 0xA0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KGGJDCENDHA_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGJDCENDHA_HADOHLNHHGB_OFFSET))(this);
		}

		::RPG::GameCore::AdventureFeatureMuteLevel FDKEHBDDNGC()
		{
			return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGJDCENDHA_FDKEHBDDNGC_OFFSET))(this);
		}

		::System::Void MCMOCNGAGAC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGGJDCENDHA_MCMOCNGAGAC_OFFSET))(this, a1);
		}

		::System::Void LICLBMEDGJM(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + KGGJDCENDHA_LICLBMEDGJM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LOPFOGPLFOO(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + KGGJDCENDHA_LOPFOGPLFOO_OFFSET))(this, a1, a2);
		}

		::System::Void IDJBJOLAKFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGJDCENDHA_IDJBJOLAKFP_OFFSET))(this);
		}

		::System::Void ACBFJLICJHF(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + KGGJDCENDHA_ACBFJLICJHF_OFFSET))(this, a1, a2);
		}

		::System::Void GHKFOBIDANI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGJDCENDHA_GHKFOBIDANI_OFFSET))(this);
		}

		::System::Void PEKCJNHKNAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGJDCENDHA_PEKCJNHKNAD_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGGJDCENDHA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean IGNOBMCOFKP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGJDCENDHA_IGNOBMCOFKP_OFFSET))(this);
		}

		::System::Void GLAIKMDAMBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGJDCENDHA_GLAIKMDAMBC_OFFSET))(this);
		}

		::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
		{
			return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGJDCENDHA_GET_FLAG_OFFSET))(this);
		}

	};
