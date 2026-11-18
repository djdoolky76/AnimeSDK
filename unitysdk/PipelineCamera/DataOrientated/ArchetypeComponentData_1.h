#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/ArchetypeComponentBitSet_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace System { class Object; }

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ArchetypeComponentData_1_TypeDefinitionIndex = 36400;

	template <typename T>
	struct alignas(8) ArchetypeComponentData_1
	{
		// static const ::System::Int32 Capacity = 0x80; // 0x0
		::PVOID m_Buffer; // 0x0
		::Unity::Collections::Allocator m_AllocatorLabel; // 0x0
		::PipelineCamera::DataOrientated::ArchetypeComponentBitSet_1<T> _bitSet; // 0x0
		::System::Int32 _bufferSize; // 0x0
		::System::Object* _componentOffset; // 0x0
	};
}
