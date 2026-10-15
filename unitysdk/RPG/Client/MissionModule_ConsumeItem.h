#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class MissionItemConfig; }

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule_ConsumeItem_TypeDefinitionIndex = 66138;

	struct alignas(8) MissionModule_ConsumeItem
	{
		::System::Boolean IsShowConsumeFinishTips; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::MissionItemConfig*>* ItemList; // 0x18
	};
}
