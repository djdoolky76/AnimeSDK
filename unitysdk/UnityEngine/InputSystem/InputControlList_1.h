#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlList_1_TypeDefinitionIndex = 31684;

	template <typename T>
	struct alignas(8) InputControlList_1
	{
		// static const ::System::UInt64 kInvalidIndex = 0xFFFFFFFFFFFFFFFF; // 0x0
		::System::Int32 m_Count; // 0x0
		::Unity::Collections::NativeArray_1<::System::UInt64> m_Indices; // 0x0
		::Unity::Collections::Allocator m_Allocator; // 0x0
	};
}
