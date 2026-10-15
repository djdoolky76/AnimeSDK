#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KANKEPCJION;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define KANKEPCJION___C__DISPLAYCLASS36_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB2DB790)
#define KANKEPCJION___C__DISPLAYCLASS36_0__SETUPSKILL_B__0_OFFSET UNITYSDK_OFFSET(0xB2DE1F0)

inline static constexpr unsigned int KANKEPCJION___c__DisplayClass36_0_TypeDefinitionIndex = 71897;

	class KANKEPCJION___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::KANKEPCJION* __4__this; // 0x10
		::RPG::GameCore::SkillData* skillData; // 0x18
		::RPG::GameCore::GameEntity* entity; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION___C__DISPLAYCLASS36_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetupSkill_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANKEPCJION___C__DISPLAYCLASS36_0__SETUPSKILL_B__0_OFFSET))(this);
		}

	};
