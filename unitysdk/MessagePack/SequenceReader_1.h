#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
#include "unitysdk/System/SequencePosition.h"

namespace MessagePack
{
	inline static constexpr unsigned int SequenceReader_1_TypeDefinitionIndex = 7243;

	template <typename T>
	struct alignas(8) SequenceReader_1
	{
		::System::Boolean usingSequence; // 0x0
		::System::Buffers::ReadOnlySequence_1<T> sequence; // 0x0
		::System::SequencePosition currentPosition; // 0x0
		::System::SequencePosition nextPosition; // 0x0
		::System::ReadOnlyMemory_1<T> memory; // 0x0
		::System::Boolean moreData; // 0x0
		::System::Int64 length; // 0x0
		::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<T> _CurrentSpan_k__BackingField; // 0x0
		::System::Int32 _CurrentSpanIndex_k__BackingField; // 0x0
		::System::Int64 _Consumed_k__BackingField; // 0x0
	};
}
