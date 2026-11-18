#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/BitSet128.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ArchetypeComponentBitSet_1_TypeDefinitionIndex = 36394;

	template <typename T>
	struct alignas(4) ArchetypeComponentBitSet_1
	{
		static ::PipelineCamera::DataOrientated::ArchetypeComponentBitSet_1<T>* StaticGet_Empty()
		{
			return (::PipelineCamera::DataOrientated::ArchetypeComponentBitSet_1<T>*)Il2CppClass::FromTypeDefinitionIndex(ArchetypeComponentBitSet_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::UInt32 Capacity = 0x80; // 0x0
		::PipelineCamera::DataOrientated::BitSet128 _bitSet; // 0x0
	};
}
