#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/A4AEE7DFB01708A3.h"
#include "unitysdk/System/Object.h"

namespace ABC::Game { class GameSettingEntryData; }

#define ABC_GAME_SOUNDSETTINGGROUPDATA_ED63BED88B06B787_AB91383A073C278E_OFFSET UNITYSDK_OFFSET(0x1F55510)
#define ABC_GAME_SOUNDSETTINGGROUPDATA_ED63BED88B06B787__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int SoundSettingGroupData_ED63BED88B06B787_TypeDefinitionIndex = 7678;

	class SoundSettingGroupData_ED63BED88B06B787 : public ::System::Object
	{
	public:
		::E68AA4EB51923C98::A4AEE7DFB01708A3 F7548969D66476AA; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_SOUNDSETTINGGROUPDATA_ED63BED88B06B787__CTOR_OFFSET))(this);
		}

		::System::Boolean AB91383A073C278E(::ABC::Game::GameSettingEntryData* A5FB7225DA5C5A9B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_SOUNDSETTINGGROUPDATA_ED63BED88B06B787_AB91383A073C278E_OFFSET))(this, A5FB7225DA5C5A9B);
		}
	};
}
