#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::Game { class GameSettingEntryData; }
namespace ABC::Game { class SoundSettingEntryData; }

#define ABC_GAME_SOUNDSETTINGGROUPDATA_A639ADD3A1F9833F_F37C4F1EE8AC1F3F_OFFSET UNITYSDK_OFFSET(0x1F555A0)
#define ABC_GAME_SOUNDSETTINGGROUPDATA_A639ADD3A1F9833F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int SoundSettingGroupData_A639ADD3A1F9833F_TypeDefinitionIndex = 7679;

	class SoundSettingGroupData_A639ADD3A1F9833F : public ::System::Object
	{
	public:
		::ABC::Game::SoundSettingEntryData* AA62839960199284; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_SOUNDSETTINGGROUPDATA_A639ADD3A1F9833F__CTOR_OFFSET))(this);
		}

		::System::Boolean F37C4F1EE8AC1F3F(::ABC::Game::GameSettingEntryData* A5FB7225DA5C5A9B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_SOUNDSETTINGGROUPDATA_A639ADD3A1F9833F_F37C4F1EE8AC1F3F_OFFSET))(this, A5FB7225DA5C5A9B);
		}
	};
}
