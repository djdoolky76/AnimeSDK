#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNKKKNJBIFL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define MNKKKNJBIFL___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC2CECC0)
#define MNKKKNJBIFL___C__DISPLAYCLASS8_0__SETUPSKILL_B__0_OFFSET UNITYSDK_OFFSET(0xC2CF5A0)

inline static constexpr unsigned int MNKKKNJBIFL___c__DisplayClass8_0_TypeDefinitionIndex = 73951;

	class MNKKKNJBIFL___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::SkillData* skillData; // 0x10
		::RPG::GameCore::GameEntity* entity; // 0x18
		::MNKKKNJBIFL* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKKNJBIFL___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetupSkill_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKKNJBIFL___C__DISPLAYCLASS8_0__SETUPSKILL_B__0_OFFSET))(this);
		}

	};
