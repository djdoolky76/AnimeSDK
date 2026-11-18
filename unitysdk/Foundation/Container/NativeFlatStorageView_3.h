#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeFlatStorageView_3_TypeDefinitionIndex = 9098;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) NativeFlatStorageView_3
	{
		static ::System::Int32* StaticGet_Alignment()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NativeFlatStorageView_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_Stride()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NativeFlatStorageView_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int64* StaticGet_ElementOffset()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(NativeFlatStorageView_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::PVOID _pointer; // 0x0
	};
}
