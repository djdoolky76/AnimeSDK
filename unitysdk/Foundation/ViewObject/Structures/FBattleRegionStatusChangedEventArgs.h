#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OJEABMGNEDJ.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FBattleRegionStatusChangedEventArgs_TypeDefinitionIndex = 79661;

	struct alignas(8) FBattleRegionStatusChangedEventArgs
	{
		::System::String* BattleRegionName; // 0x10
		::OJEABMGNEDJ PrevStatus; // 0x18
		::OJEABMGNEDJ CurrentStatus; // 0x1C
	};
}
