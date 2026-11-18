#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Buffers { template <typename T> class IMemoryOwner_1; }

namespace Nerdbank::Streams
{
	inline static constexpr unsigned int Sequence_1_SequenceSegment_TypeDefinitionIndex = 30928;

	template <typename T>
	class Sequence_1_SequenceSegment
	{
	public:
		static ::System::Boolean* StaticGet_MayContainReferences()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Sequence_1_SequenceSegment_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 _Start_k__BackingField; // 0x0
		::System::Int32 _End_k__BackingField; // 0x0
		::System::Buffers::IMemoryOwner_1<T>* _MemoryOwner_k__BackingField; // 0x0
	};
}
