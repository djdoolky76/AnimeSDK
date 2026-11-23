#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::Game { class GameSettingEntryData; }
namespace ABC::Game { class SoundSettingEntryData; }

#define ABC_GAME_SOUNDSETTINGGROUPDATA_E8E8C378C37D8EE7_AB91383A073C278E_OFFSET UNITYSDK_OFFSET(0x1F55350)
#define ABC_GAME_SOUNDSETTINGGROUPDATA_E8E8C378C37D8EE7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int SoundSettingGroupData_E8E8C378C37D8EE7_TypeDefinitionIndex = 7676;

	class SoundSettingGroupData_E8E8C378C37D8EE7 : public ::System::Object
	{
	public:
		::ABC::Game::SoundSettingEntryData* AA62839960199284; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_SOUNDSETTINGGROUPDATA_E8E8C378C37D8EE7__CTOR_OFFSET))(this);
		}

		::System::Boolean AB91383A073C278E(::ABC::Game::GameSettingEntryData* A5FB7225DA5C5A9B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_SOUNDSETTINGGROUPDATA_E8E8C378C37D8EE7_AB91383A073C278E_OFFSET))(this, A5FB7225DA5C5A9B);
		}
	};
}
