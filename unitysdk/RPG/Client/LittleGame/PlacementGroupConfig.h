#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/WeightConfig.h"
namespace RPG::Client::LittleGame { class PresetConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_PLACEMENTGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA095F0)

namespace RPG::Client::LittleGame
{
	class PlacementGroupConfig : public ::RPG::Client::LittleGame::WeightConfig
	{
	public:
		::System::Int32 GroupIndex; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::PresetConfig*>* GroupItemList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PLACEMENTGROUPCONFIG_CTOR_OFFSET))(this);
		}

	};
}
