#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/BitSet256.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ComponentBitSet_1_TypeDefinitionIndex = 36391;

	template <typename T>
	struct alignas(4) ComponentBitSet_1
	{
		static ::PipelineCamera::DataOrientated::ComponentBitSet_1<T>* StaticGet_Empty()
		{
			return (::PipelineCamera::DataOrientated::ComponentBitSet_1<T>*)Il2CppClass::FromTypeDefinitionIndex(ComponentBitSet_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::UInt32 Capacity = 0x100; // 0x0
		::PipelineCamera::DataOrientated::BitSet256 _bitSet; // 0x0
	};
}
