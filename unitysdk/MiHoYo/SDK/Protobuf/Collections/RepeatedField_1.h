#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Collections
{
	inline static constexpr unsigned int RepeatedField_1_TypeDefinitionIndex = 28646;

	template <typename T>
	class RepeatedField_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<T>** StaticGet_EmptyArray()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(RepeatedField_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 count; // 0x0
	};
}
