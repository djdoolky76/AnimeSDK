#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::Game { class GameSettingEntryData; }
namespace ABC::Game { class LanguageSettingEntryData; }

#define ABC_GAME_LANGUAGESETTINGGROUPDATA_E01D94373D3857D8_AB91383A073C278E_OFFSET UNITYSDK_OFFSET(0x1FECB30)
#define ABC_GAME_LANGUAGESETTINGGROUPDATA_E01D94373D3857D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int LanguageSettingGroupData_E01D94373D3857D8_TypeDefinitionIndex = 8080;

	class LanguageSettingGroupData_E01D94373D3857D8 : public ::System::Object
	{
	public:
		::ABC::Game::LanguageSettingEntryData* B61BA26A09E9D1B5; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGGROUPDATA_E01D94373D3857D8__CTOR_OFFSET))(this);
		}

		::System::Boolean AB91383A073C278E(::ABC::Game::GameSettingEntryData* A5FB7225DA5C5A9B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGGROUPDATA_E01D94373D3857D8_AB91383A073C278E_OFFSET))(this, A5FB7225DA5C5A9B);
		}
	};
}
