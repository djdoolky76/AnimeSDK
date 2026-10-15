#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/ZLinq/Linq/FromMemory_1.h"
namespace System { class Object; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int FromReadOnlySequence_1_TypeDefinitionIndex = 6109;

	template <typename T>
	struct alignas(8) FromReadOnlySequence_1
	{
		::System::Buffers::ReadOnlySequence_1<T> _source_P; // 0x0
		::System::Boolean isInit; // 0x0
		::System::Object* sequenceEnumerator; // 0x0
		::ZLinq::Linq::FromMemory_1<T> enumerator; // 0x0
	};
}
