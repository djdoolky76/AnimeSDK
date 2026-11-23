#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Game/GameSettingGroupData.h"

class A31C67312C73E0E6;
namespace ABC::Game { class GameSettingEntryData; }
namespace System { class Enum; }

#define ABC_GAME_LANGUAGESETTINGGROUPDATA_SETENTRYDATA_OFFSET UNITYSDK_OFFSET(0x1FE3DB0)
#define ABC_GAME_LANGUAGESETTINGGROUPDATA_TRYGETENTRYDATA_1_OFFSET UNITYSDK_OFFSET(0x1FE4160)
#define ABC_GAME_LANGUAGESETTINGGROUPDATA_TRYGETENTRYDATA_2_OFFSET UNITYSDK_OFFSET(0x1FE3FC0)
#define ABC_GAME_LANGUAGESETTINGGROUPDATA_TRYGETENTRYDATA_OFFSET UNITYSDK_OFFSET(0x1FE4350)
#define ABC_GAME_LANGUAGESETTINGGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE4540)

namespace ABC::Game
{
	inline static constexpr unsigned int LanguageSettingGroupData_TypeDefinitionIndex = 8084;

	class LanguageSettingGroupData : public ::ABC::Game::GameSettingGroupData
	{
	public:
		::System::Boolean TryGetEntryData(::ABC::Game::GameSettingEntryData* AF4717A1A80FD60F, ::ABC::Game::GameSettingEntryData*& F220A2D27F7C6B6C)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*, ::ABC::Game::GameSettingEntryData*&))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGGROUPDATA_TRYGETENTRYDATA_OFFSET))(this, AF4717A1A80FD60F, F220A2D27F7C6B6C);
		}

		::System::Boolean TryGetEntryData_1(::A31C67312C73E0E6* A5C299C395D3E1B2, ::ABC::Game::GameSettingEntryData*& F220A2D27F7C6B6C)
		{
			return ((::System::Boolean(*)(::PVOID, ::A31C67312C73E0E6*, ::ABC::Game::GameSettingEntryData*&))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGGROUPDATA_TRYGETENTRYDATA_1_OFFSET))(this, A5C299C395D3E1B2, F220A2D27F7C6B6C);
		}

		::System::Boolean TryGetEntryData_2(::System::Enum* A288CB28FC2A6DA3, ::ABC::Game::GameSettingEntryData*& F220A2D27F7C6B6C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Enum*, ::ABC::Game::GameSettingEntryData*&))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGGROUPDATA_TRYGETENTRYDATA_2_OFFSET))(this, A288CB28FC2A6DA3, F220A2D27F7C6B6C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGGROUPDATA__CTOR_OFFSET))(this);
		}

		::System::Void SetEntryData(::ABC::Game::GameSettingEntryData* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_LANGUAGESETTINGGROUPDATA_SETENTRYDATA_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
