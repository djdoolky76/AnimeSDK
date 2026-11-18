#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Memory_1_0C8BFCC1F832CC26.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace System::IO { class MemoryStream; }

#define MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1EBAEDF0)
#define MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_ENSURECAPCITY_OFFSET UNITYSDK_OFFSET(0x1EBAEEA0)
#define MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_FLUSHANDGETARRAY_OFFSET UNITYSDK_OFFSET(0x1EBAF2B0)
#define MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_GETMEMORY_OFFSET UNITYSDK_OFFSET(0x1EBAEE00)
#define MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_GETRAWSPAN_OFFSET UNITYSDK_OFFSET(0x1EBAF160)
#define MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_GETSPAN_OFFSET UNITYSDK_OFFSET(0x1EBAF010)
#define MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_RESET_OFFSET UNITYSDK_OFFSET(0x1EBAF240)
#define MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_TRYENLARGE_OFFSET UNITYSDK_OFFSET(0x1EBAF150)
#define MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBAED40)

namespace MessagePack
{
	inline static constexpr unsigned int GraphMemoryStreamBufferWriter_TypeDefinitionIndex = 29828;

	class GraphMemoryStreamBufferWriter : public ::System::Object
	{
	public:
		// static const ::System::Int32 BUFF_MAX_COUNT = 0x6400000; // 0x0
		// static const ::System::Int32 default_extend = 0x1000; // 0x0
		::System::IO::MemoryStream* _memoryStream; // 0x10
		::System::Int32 _buffExtend; // 0x18
		::System::Int32 Position; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER__CTOR_OFFSET))(this);
		}

		::System::Void Advance(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_ADVANCE_OFFSET))(this, count);
		}

		::System::Memory_1_0C8BFCC1F832CC26<::System::Byte> GetMemory(::System::Int32 sizeHint)
		{
			return ((::System::Memory_1_0C8BFCC1F832CC26<::System::Byte>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_GETMEMORY_OFFSET))(this, sizeHint);
		}

		::System::Span_1_9011FAD97750D224<::System::Byte> GetSpan(::System::Int32 sizeHint)
		{
			return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_GETSPAN_OFFSET))(this, sizeHint);
		}

		::System::Void EnsureCapcity(::System::Int32 sizeHint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_ENSURECAPCITY_OFFSET))(this, sizeHint);
		}

		::System::Void TryEnlarge(::System::Int32 sizeHint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_TRYENLARGE_OFFSET))(this, sizeHint);
		}

		::System::Span_1_9011FAD97750D224<::System::Byte> GetRawSpan()
		{
			return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_GETRAWSPAN_OFFSET))(this);
		}

		::System::Void Reset(::System::Int32 bufExtendSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_RESET_OFFSET))(this, bufExtendSize);
		}

		::Il2CppArray<::System::Byte>* FlushAndGetArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHMEMORYSTREAMBUFFERWRITER_FLUSHANDGETARRAY_OFFSET))(this);
		}
	};
}
