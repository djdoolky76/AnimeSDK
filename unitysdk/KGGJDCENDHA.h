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

#define KGGJDCENDHA_ACBFJLICJHF_OFFSET UNITYSDK_OFFSET(0xB3EA420)
#define KGGJDCENDHA_CTOR_OFFSET UNITYSDK_OFFSET(0xB3E9930)
#define KGGJDCENDHA_FDKEHBDDNGC_OFFSET UNITYSDK_OFFSET(0xB3E9B30)
#define KGGJDCENDHA_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xB3EB5E0)
#define KGGJDCENDHA_GHKFOBIDANI_OFFSET UNITYSDK_OFFSET(0xB3EB060)
#define KGGJDCENDHA_GLAIKMDAMBC_OFFSET UNITYSDK_OFFSET(0xB3EB2C0)
#define KGGJDCENDHA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB3E9AD0)
#define KGGJDCENDHA_IDJBJOLAKFP_OFFSET UNITYSDK_OFFSET(0xB3EA800)
#define KGGJDCENDHA_IGNOBMCOFKP_OFFSET UNITYSDK_OFFSET(0xB3EA8E0)
#define KGGJDCENDHA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB3EB160)
#define KGGJDCENDHA_LICLBMEDGJM_OFFSET UNITYSDK_OFFSET(0xB3EA230)
#define KGGJDCENDHA_LOPFOGPLFOO_OFFSET UNITYSDK_OFFSET(0xB3EA360)
#define KGGJDCENDHA_MCMOCNGAGAC_OFFSET UNITYSDK_OFFSET(0xB3E9BD0)
#define KGGJDCENDHA_PEKCJNHKNAD_OFFSET UNITYSDK_OFFSET(0xB3EB0E0)

	class KGGJDCENDHA : public ::BDENDNDOFLF
	{
	public:
		::RPG::Client::AdventurePhase* BLAFNEBDBCH; // 0x68
		::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x70
		::RPG::GameCore::AdventureSkillCharacterComponent* KKANBKCEJEF; // 0x78
		::RPG::GameCore::CharacterVisibleComponent* JAOPNEJFELA; // 0x80
		::RPG::GameCore::AdventureAbilityComponent* POLIHAMFHCI; // 0x88
		::RPG::GameCore::NPCComponent* KDJMBIPEAFM; // 0x90
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x98
		::System::Boolean DIMECBLLOGB; // 0x9C
		::System::Byte _padding0[0x3];
		::System::Single AKGFBENBNFI; // 0xA0
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
