#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlyMemory_1_0ED4571775E9BB6A.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace System
{
	inline static constexpr unsigned int ReadOnlyMemory_1_TypeDefinitionIndex = 109;

	template <typename T>
	struct alignas(8) ReadOnlyMemory_1
	{
		static ::System::ReadOnlyMemory_1_0ED4571775E9BB6A<T>* StaticGet__Empty_k__BackingField()
		{
			return (::System::ReadOnlyMemory_1_0ED4571775E9BB6A<T>*)Il2CppClass::FromTypeDefinitionIndex(ReadOnlyMemory_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Object* _arrayOrOwnedMemory; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _length; // 0x0
	};
}
