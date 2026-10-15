#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDENDNDOFLF.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class GameEntity; }

#define LCBHCKEMOBC_CTOR_OFFSET UNITYSDK_OFFSET(0xB610CC0)
#define LCBHCKEMOBC_FDKEHBDDNGC_OFFSET UNITYSDK_OFFSET(0xB610D50)
#define LCBHCKEMOBC_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xB610EB0)
#define LCBHCKEMOBC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB610D00)
#define LCBHCKEMOBC_IEHGJKIODLM_OFFSET UNITYSDK_OFFSET(0xB610DB0)

inline static constexpr unsigned int LCBHCKEMOBC_TypeDefinitionIndex = 57046;

	class LCBHCKEMOBC : public ::BDENDNDOFLF
	{
	public:
		::RPG::GameCore::AdventureAbilityComponent* NJFKODGGCFA; // 0x68
		::RPG::GameCore::GameEntity* GDCCJFKJGPD; // 0x70
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x78
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LCBHCKEMOBC_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBHCKEMOBC_HADOHLNHHGB_OFFSET))(this);
		}

		::RPG::GameCore::AdventureFeatureMuteLevel FDKEHBDDNGC()
		{
			return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBHCKEMOBC_FDKEHBDDNGC_OFFSET))(this);
		}

		::System::Void IEHGJKIODLM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LCBHCKEMOBC_IEHGJKIODLM_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
		{
			return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBHCKEMOBC_GET_FLAG_OFFSET))(this);
		}

	};
