#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/BitSet128.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ChunkComponentBitSet_1_TypeDefinitionIndex = 36393;

	template <typename T>
	struct alignas(4) ChunkComponentBitSet_1
	{
		static ::PipelineCamera::DataOrientated::ChunkComponentBitSet_1<T>* StaticGet_Empty()
		{
			return (::PipelineCamera::DataOrientated::ChunkComponentBitSet_1<T>*)Il2CppClass::FromTypeDefinitionIndex(ChunkComponentBitSet_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::UInt32 Capacity = 0x80; // 0x0
		::PipelineCamera::DataOrientated::BitSet128 _bitSet; // 0x0
	};
}
