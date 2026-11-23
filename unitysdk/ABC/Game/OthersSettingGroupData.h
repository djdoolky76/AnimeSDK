#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Game/GameSettingGroupData.h"

class A31C67312C73E0E6;
namespace ABC::Game { class GameSettingEntryData; }
namespace System { class Enum; }

#define ABC_GAME_OTHERSSETTINGGROUPDATA_SETENTRYDATA_OFFSET UNITYSDK_OFFSET(0x21DDA60)
#define ABC_GAME_OTHERSSETTINGGROUPDATA_TRYGETENTRYDATA_1_OFFSET UNITYSDK_OFFSET(0x21DDC60)
#define ABC_GAME_OTHERSSETTINGGROUPDATA_TRYGETENTRYDATA_2_OFFSET UNITYSDK_OFFSET(0x21DE000)
#define ABC_GAME_OTHERSSETTINGGROUPDATA_TRYGETENTRYDATA_OFFSET UNITYSDK_OFFSET(0x21DDE30)
#define ABC_GAME_OTHERSSETTINGGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x21DE090)

namespace ABC::Game
{
	inline static constexpr unsigned int OthersSettingGroupData_TypeDefinitionIndex = 8965;

	class OthersSettingGroupData : public ::ABC::Game::GameSettingGroupData
	{
	public:
		::System::Void SetEntryData(::ABC::Game::GameSettingEntryData* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_OTHERSSETTINGGROUPDATA_SETENTRYDATA_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_OTHERSSETTINGGROUPDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetEntryData(::A31C67312C73E0E6* A5C299C395D3E1B2, ::ABC::Game::GameSettingEntryData*& F220A2D27F7C6B6C)
		{
			return ((::System::Boolean(*)(::PVOID, ::A31C67312C73E0E6*, ::ABC::Game::GameSettingEntryData*&))((::PBYTE)hIl2Cpp + ABC_GAME_OTHERSSETTINGGROUPDATA_TRYGETENTRYDATA_OFFSET))(this, A5C299C395D3E1B2, F220A2D27F7C6B6C);
		}

		::System::Boolean TryGetEntryData_1(::ABC::Game::GameSettingEntryData* AF4717A1A80FD60F, ::ABC::Game::GameSettingEntryData*& F220A2D27F7C6B6C)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*, ::ABC::Game::GameSettingEntryData*&))((::PBYTE)hIl2Cpp + ABC_GAME_OTHERSSETTINGGROUPDATA_TRYGETENTRYDATA_1_OFFSET))(this, AF4717A1A80FD60F, F220A2D27F7C6B6C);
		}

		::System::Boolean TryGetEntryData_2(::System::Enum* A288CB28FC2A6DA3, ::ABC::Game::GameSettingEntryData*& F220A2D27F7C6B6C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Enum*, ::ABC::Game::GameSettingEntryData*&))((::PBYTE)hIl2Cpp + ABC_GAME_OTHERSSETTINGGROUPDATA_TRYGETENTRYDATA_2_OFFSET))(this, A288CB28FC2A6DA3, F220A2D27F7C6B6C);
		}
	};
}
