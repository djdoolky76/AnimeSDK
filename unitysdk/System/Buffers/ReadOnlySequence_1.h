#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SequencePosition.h"

namespace System::Buffers
{
	inline static constexpr unsigned int ReadOnlySequence_1_TypeDefinitionIndex = 4998;

	template <typename T>
	struct alignas(4) ReadOnlySequence_1
	{
		::System::SequencePosition _sequenceStart; // 0x0
		::System::SequencePosition _sequenceEnd; // 0x0
		static ::System::Buffers::ReadOnlySequence_1<T>* StaticGet_Empty()
		{
			return (::System::Buffers::ReadOnlySequence_1<T>*)UnitySDK::FromName("System.Buffers", "ReadOnlySequence`1")->GetStaticField(0x0);
		}

	};
}
