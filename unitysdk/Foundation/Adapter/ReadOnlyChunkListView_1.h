#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

namespace Foundation::Adapter
{
	inline static constexpr unsigned int ReadOnlyChunkListView_1_TypeDefinitionIndex = 8774;

	template <typename T>
	struct alignas(8) ReadOnlyChunkListView_1
	{
		::Unity::Collections::NativeSlice_1<::System::IntPtr> ChunkPointers; // 0x0
		::System::Int32 Count; // 0x0
		::System::Int32 ChunkSizeBit; // 0x0
	};
}
