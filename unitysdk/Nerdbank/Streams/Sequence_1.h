#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Buffers { class ReadOnlySequence; }
namespace System::Buffers { template <typename T> class ArrayPool_1; }
namespace System::Buffers { template <typename T> class MemoryPool_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Nerdbank::Streams
{
	template <typename T>
	class Sequence_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::System::Object*>* segmentPool; // 0x0
		::System::Buffers::MemoryPool_1<T>* memoryPool; // 0x0
		::System::Buffers::ArrayPool_1<T>* arrayPool; // 0x0
		::System::Object* first; // 0x0
		::System::Object* last; // 0x0
		::System::Int32 _MinimumSpanLength_k__BackingField; // 0x0
		::System::Boolean _AutoIncreaseMinimumSpanLength_k__BackingField; // 0x0
		static ::System::Int32* StaticGet_DefaultLengthFromArrayPool()
		{
			return (::System::Int32*)UnitySDK::FromName("Nerdbank.Streams", "Sequence`1")->GetStaticField(0x0);
		}

		static ::System::Buffers::ReadOnlySequence** StaticGet_Empty()
		{
			return (::System::Buffers::ReadOnlySequence**)UnitySDK::FromName("Nerdbank.Streams", "Sequence`1")->GetStaticField(0x0);
		}

	};
}
