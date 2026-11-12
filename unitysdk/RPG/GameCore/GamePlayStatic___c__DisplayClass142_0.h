#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace System { class String; }

#define RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS142_0_CTOR_OFFSET UNITYSDK_OFFSET(0xF1C2770)
#define RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS142_0__GETFIRSTALLOWCHARMSKILL_B__0_OFFSET UNITYSDK_OFFSET(0xF1C2BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GamePlayStatic___c__DisplayClass142_0_TypeDefinitionIndex = 60290;

	class GamePlayStatic___c__DisplayClass142_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::SkillCharacterComponent* skillChara; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS142_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFirstAllowCharmSkill_b__0(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYSTATIC___C__DISPLAYCLASS142_0__GETFIRSTALLOWCHARMSKILL_B__0_OFFSET))(this, a1);
		}

	};
}
