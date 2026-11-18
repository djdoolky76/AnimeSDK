#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Memory_1_0C8BFCC1F832CC26.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace System
{
	inline static constexpr unsigned int Memory_1_TypeDefinitionIndex = 107;

	template <typename T>
	struct alignas(8) Memory_1
	{
		static ::System::Memory_1_0C8BFCC1F832CC26<T>* StaticGet__Empty_k__BackingField()
		{
			return (::System::Memory_1_0C8BFCC1F832CC26<T>*)Il2CppClass::FromTypeDefinitionIndex(Memory_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Object* _arrayOrOwnedMemory; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _length; // 0x0
	};
}
