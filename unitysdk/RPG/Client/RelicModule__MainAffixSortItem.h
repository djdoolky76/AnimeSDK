#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RelicMainAffixConfigRow; }

namespace RPG::Client
{
	inline static constexpr unsigned int RelicModule__MainAffixSortItem_TypeDefinitionIndex = 68798;

	struct alignas(8) RelicModule__MainAffixSortItem
	{
		::RPG::GameCore::RelicMainAffixConfigRow* Row; // 0x10
		::System::Boolean IsExcellent; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 Percent; // 0x1C
		::System::Int32 RecommendIndex; // 0x20
	};
}
