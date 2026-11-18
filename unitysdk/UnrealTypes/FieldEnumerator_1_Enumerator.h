#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnrealTypes { class FField; }
namespace UnrealTypes { class Struct; }

namespace UnrealTypes
{
	inline static constexpr unsigned int FieldEnumerator_1_Enumerator_TypeDefinitionIndex = 27756;

	template <typename T>
	struct alignas(8) FieldEnumerator_1_Enumerator
	{
		::UnrealTypes::Struct* _struct; // 0x0
		::UnrealTypes::FField* _field; // 0x0
		::System::Boolean _includeSuper; // 0x0
	};
}
