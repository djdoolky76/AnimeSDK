#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnrealTypes { class Class; }
namespace UnrealTypes { class Object; }

namespace UnrealTypes
{
	inline static constexpr unsigned int FObjectInitializer_TypeDefinitionIndex = 27766;

	struct alignas(8) FObjectInitializer
	{
		::UnrealTypes::Class* Class; // 0x10
		::UnrealTypes::Object* Outer; // 0x18
		::System::String* Name; // 0x20
	};
}
