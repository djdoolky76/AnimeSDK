#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/NativeMemoryAllocation.h"
#include "unitysdk/Foundation/NativeMemoryRequest.h"
#include "unitysdk/Foundation/NativeTempMemoryBuilder1.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define FOUNDATION_NATIVETEMPMEMORYBUILDER_ALLOCATESTORAGE_OFFSET UNITYSDK_OFFSET(0x1FCC4A70)
#define FOUNDATION_NATIVETEMPMEMORYBUILDER_REQUESTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FCC49F0)

namespace Foundation
{
	inline static constexpr unsigned int NativeTempMemoryBuilder_TypeDefinitionIndex = 9002;

	class NativeTempMemoryBuilder : public ::System::Object
	{
	public:
		static ::Foundation::NativeTempMemoryBuilder1 RequestInternal(::Foundation::NativeMemoryRequest& request)
		{
			return ((::Foundation::NativeTempMemoryBuilder1(*)(::Foundation::NativeMemoryRequest&))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVETEMPMEMORYBUILDER_REQUESTINTERNAL_OFFSET))(request);
		}

		static ::System::Void AllocateStorage(::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequest> requests, ::System::Int32 alignment, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryAllocation> allocations, ::Unity::Collections::NativeArray_1<::System::Byte>& storage, ::System::Int32& startOffset)
		{
			return ((::System::Void(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequest>, ::System::Int32, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryAllocation>, ::Unity::Collections::NativeArray_1<::System::Byte>&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVETEMPMEMORYBUILDER_ALLOCATESTORAGE_OFFSET))(requests, alignment, allocations, storage, startOffset);
		}
	};
}
