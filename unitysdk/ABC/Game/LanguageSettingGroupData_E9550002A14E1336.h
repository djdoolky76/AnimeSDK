#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/BB8E1C26AB62AE20.h"
#include "unitysdk/System/Object.h"

namespace ABC::Game { class GameSettingEntryData; }

#define ABC_GAME_LANGUAGESETTINGGROUPDATA_E9550002A14E1336_AB91383A073C278E_OFFSET UNITYSDK_OFFSET(0x1FECCF0)
#define ABC_GAME_LANGUAGESETTINGGROUPDATA_E9550002A14E1336__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int LanguageSettingGroupData_E9550002A14E1336_TypeDefinitionIndex = 8082;

	class LanguageSettingGroupData_E9550002A14E1336 : public ::System::Object
	{
	public:
		::E68AA4EB51923C98::BB8E1C26AB62AE20 B93B1EB29C4012BB; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGGROUPDATA_E9550002A14E1336__CTOR_OFFSET))(this);
		}

		::System::Boolean AB91383A073C278E(::ABC::Game::GameSettingEntryData* A5FB7225DA5C5A9B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGGROUPDATA_E9550002A14E1336_AB91383A073C278E_OFFSET))(this, A5FB7225DA5C5A9B);
		}
	};
}
