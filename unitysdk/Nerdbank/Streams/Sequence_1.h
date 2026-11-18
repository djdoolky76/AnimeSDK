#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Buffers { template <typename T> class ArrayPool_1_1036FF0C6A510415; }
namespace System::Buffers { template <typename T> class MemoryPool_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Nerdbank::Streams
{
	inline static constexpr unsigned int Sequence_1_TypeDefinitionIndex = 30927;

	template <typename T>
	class Sequence_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_DefaultLengthFromArrayPool()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Sequence_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::Stack_1<::System::Object*>* segmentPool; // 0x0
		::System::Buffers::MemoryPool_1<T>* memoryPool; // 0x0
		::System::Buffers::ArrayPool_1_1036FF0C6A510415<T>* arrayPool; // 0x0
		::System::Object* first; // 0x0
		::System::Object* last; // 0x0
		::System::Int32 _MinimumSpanLength_k__BackingField; // 0x0
	};
}
