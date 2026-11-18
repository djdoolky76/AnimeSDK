#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	inline static constexpr unsigned int Array_EmptyInternalEnumerator_1_TypeDefinitionIndex = 129;

	template <typename T>
	class Array_EmptyInternalEnumerator_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_Value()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Array_EmptyInternalEnumerator_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
