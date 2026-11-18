#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Class; }

namespace UnrealTypes
{
	inline static constexpr unsigned int TSubclassOf_1_TypeDefinitionIndex = 27826;

	template <typename T>
	struct alignas(8) TSubclassOf_1
	{
		static ::UnrealTypes::TSubclassOf_1<T>* StaticGet_Invalid()
		{
			return (::UnrealTypes::TSubclassOf_1<T>*)Il2CppClass::FromTypeDefinitionIndex(TSubclassOf_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Class*> Class; // 0x0
	};
}
