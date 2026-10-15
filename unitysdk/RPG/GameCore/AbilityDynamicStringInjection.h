#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityDynamicStringInjection_TypeDefinitionIndex = 54399;

	struct alignas(8) AbilityDynamicStringInjection
	{
		::System::Int32 Hash; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Value; // 0x18
	};
}
