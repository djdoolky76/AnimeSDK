#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BABFBCHGIHG.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController_IKRecord_TypeDefinitionIndex = 85907;

	struct alignas(4) UIBaseChatPlayController_IKRecord
	{
		::System::Int32 TagID; // 0x10
		::BABFBCHGIHG IKType; // 0x14
		::System::Boolean IsPush; // 0x18
	};
}
