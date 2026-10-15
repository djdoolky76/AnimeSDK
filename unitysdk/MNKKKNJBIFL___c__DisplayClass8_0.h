#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNKKKNJBIFL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define MNKKKNJBIFL___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA106A0)
#define MNKKKNJBIFL___C__DISPLAYCLASS8_0__SETUPSKILL_B__0_OFFSET UNITYSDK_OFFSET(0xBA10F80)

inline static constexpr unsigned int MNKKKNJBIFL___c__DisplayClass8_0_TypeDefinitionIndex = 71929;

	class MNKKKNJBIFL___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10
		::MNKKKNJBIFL* __4__this; // 0x18
		::RPG::GameCore::SkillData* skillData; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKKNJBIFL___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetupSkill_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKKKNJBIFL___C__DISPLAYCLASS8_0__SETUPSKILL_B__0_OFFSET))(this);
		}

	};
