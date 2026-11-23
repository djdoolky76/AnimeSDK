#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::Game { class GameSettingEntryData; }
namespace ABC::Game { class LanguageSettingEntryData; }

#define ABC_GAME_LANGUAGESETTINGGROUPDATA_B97D98B9B24097C0_F37C4F1EE8AC1F3F_OFFSET UNITYSDK_OFFSET(0x1FECEF0)
#define ABC_GAME_LANGUAGESETTINGGROUPDATA_B97D98B9B24097C0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int LanguageSettingGroupData_B97D98B9B24097C0_TypeDefinitionIndex = 8083;

	class LanguageSettingGroupData_B97D98B9B24097C0 : public ::System::Object
	{
	public:
		::ABC::Game::LanguageSettingEntryData* B61BA26A09E9D1B5; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGGROUPDATA_B97D98B9B24097C0__CTOR_OFFSET))(this);
		}

		::System::Boolean F37C4F1EE8AC1F3F(::ABC::Game::GameSettingEntryData* A5FB7225DA5C5A9B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGGROUPDATA_B97D98B9B24097C0_F37C4F1EE8AC1F3F_OFFSET))(this, A5FB7225DA5C5A9B);
		}
	};
}
