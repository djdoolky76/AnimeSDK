#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int V470CurveAliasSpeed_TypeDefinitionIndex = 81683;

	struct alignas(8) V470CurveAliasSpeed
	{
		::System::String* Alias; // 0x10
		::System::Single Speed; // 0x18
	};
}
