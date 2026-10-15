#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/SequencePosition.h"
namespace System::Buffers { class ReadOnlySequence; }

namespace System::Buffers
{
	inline static constexpr unsigned int ReadOnlySequence_1_Enumerator_TypeDefinitionIndex = 4999;

	template <typename T>
	struct alignas(8) ReadOnlySequence_1_Enumerator
	{
		::System::Buffers::ReadOnlySequence* _sequence; // 0x0
		::System::SequencePosition _next; // 0x0
		::System::ReadOnlyMemory_1<T> _currentMemory; // 0x0
	};
}
