#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int ExposedList_1_TypeDefinitionIndex = 8303;

	template <typename T>
	class ExposedList_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<T>** StaticGet_EmptyArray()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(ExposedList_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 DefaultCapacity = 0x4; // 0x0
		::Il2CppArray<T>* Items; // 0x0
		::System::Int32 Count; // 0x0
		::System::Int32 version; // 0x0
	};
}
