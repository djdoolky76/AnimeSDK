#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedSet_1_Enumerator_TypeDefinitionIndex = 3983;

	template <typename T>
	struct alignas(8) SortedSet_1_Enumerator
	{
		static ::System::Object** StaticGet_s_dummyNode()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(SortedSet_1_Enumerator_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::SortedSet_1<T>* _tree; // 0x0
		::System::Int32 _version; // 0x0
		::System::Collections::Generic::Stack_1<::System::Object*>* _stack; // 0x0
		::System::Object* _current; // 0x0
		::System::Boolean _reverse; // 0x0
	};
}
