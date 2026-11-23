#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FE8E72D07C27B689;
namespace ABC::Game { class GameSettingEntryData; }

#define ABC_GAME_SOUNDSETTINGGROUPDATA_BC10D7FAE9D6F2FC_AB91383A073C278E_OFFSET UNITYSDK_OFFSET(0x1F55430)
#define ABC_GAME_SOUNDSETTINGGROUPDATA_BC10D7FAE9D6F2FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Game
{
	inline static constexpr unsigned int SoundSettingGroupData_BC10D7FAE9D6F2FC_TypeDefinitionIndex = 7677;

	class SoundSettingGroupData_BC10D7FAE9D6F2FC : public ::System::Object
	{
	public:
		::FE8E72D07C27B689* E56297379B968B44; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_SOUNDSETTINGGROUPDATA_BC10D7FAE9D6F2FC__CTOR_OFFSET))(this);
		}

		::System::Boolean AB91383A073C278E(::ABC::Game::GameSettingEntryData* A5FB7225DA5C5A9B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Game::GameSettingEntryData*))((::PBYTE)hIl2Cpp + ABC_GAME_SOUNDSETTINGGROUPDATA_BC10D7FAE9D6F2FC_AB91383A073C278E_OFFSET))(this, A5FB7225DA5C5A9B);
		}
	};
}
