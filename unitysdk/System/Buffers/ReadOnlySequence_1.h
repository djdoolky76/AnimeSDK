#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SequencePosition.h"
#include "unitysdk/System/ValueType.h"

namespace System::Buffers
{
	inline static constexpr unsigned int ReadOnlySequence_1_TypeDefinitionIndex = 6586;

	template <typename T>
	struct alignas(4) ReadOnlySequence_1
	{
		static ::System::Buffers::ReadOnlySequence_1<T>* StaticGet_Empty()
		{
			return (::System::Buffers::ReadOnlySequence_1<T>*)Il2CppClass::FromTypeDefinitionIndex(ReadOnlySequence_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::SequencePosition _sequenceStart; // 0x0
		::System::SequencePosition _sequenceEnd; // 0x0
	};
}
