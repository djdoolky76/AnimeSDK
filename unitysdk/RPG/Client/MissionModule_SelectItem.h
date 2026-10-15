#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class MissionItemConfigList; }
namespace RPG::GameCore { class SelectMissionItemConfig; }

namespace RPG::Client
{
	struct alignas(8) MissionModule_SelectItem
	{
		::Il2CppArray<::RPG::GameCore::SelectMissionItemConfig*>* ItemSelectConfig; // 0x10
		::RPG::GameCore::MissionItemConfigList* PlayerSelectList; // 0x18
	};
}
