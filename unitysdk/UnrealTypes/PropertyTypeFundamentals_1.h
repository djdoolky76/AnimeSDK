#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int PropertyTypeFundamentals_1_TypeDefinitionIndex = 27803;

	template <typename T>
	class PropertyTypeFundamentals_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_CppSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PropertyTypeFundamentals_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_CppAlignment()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PropertyTypeFundamentals_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
