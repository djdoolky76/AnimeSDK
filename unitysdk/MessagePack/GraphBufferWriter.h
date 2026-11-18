#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/BufferWriter.h"
#include "unitysdk/MessagePack/GraphBufferWriter_MODE.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

namespace MessagePack { class GraphMemoryStreamBufferWriter; }
namespace MessagePack { class SequencePool; }

#define MESSAGEPACK_GRAPHBUFFERWRITER_ADVANCE_OFFSET UNITYSDK_OFFSET(0x8BCC70)
#define MESSAGEPACK_GRAPHBUFFERWRITER_ENSUREMORE_OFFSET UNITYSDK_OFFSET(0x8D7370)
#define MESSAGEPACK_GRAPHBUFFERWRITER_ENSURE_OFFSET UNITYSDK_OFFSET(0x8D7270)
#define MESSAGEPACK_GRAPHBUFFERWRITER_GETPOINTER_OFFSET UNITYSDK_OFFSET(0x8D71C0)
#define MESSAGEPACK_GRAPHBUFFERWRITER_GETRAWSPAN_OFFSET UNITYSDK_OFFSET(0x8BC790)
#define MESSAGEPACK_GRAPHBUFFERWRITER_GETSPAN_OFFSET UNITYSDK_OFFSET(0x8D7150)
#define MESSAGEPACK_GRAPHBUFFERWRITER_GET_BYTESCOMMITTED_OFFSET UNITYSDK_OFFSET(0x8BC630)
#define MESSAGEPACK_GRAPHBUFFERWRITER_GET_SPAN_OFFSET UNITYSDK_OFFSET(0x8D7120)
#define MESSAGEPACK_GRAPHBUFFERWRITER_TRYGETUNCOMMITTEDSPAN_OFFSET UNITYSDK_OFFSET(0x8D7290)
#define MESSAGEPACK_GRAPHBUFFERWRITER_WRITEMULTIBUFFER_OFFSET UNITYSDK_OFFSET(0x8D7380)
#define MESSAGEPACK_GRAPHBUFFERWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x8BC7F0)
#define MESSAGEPACK_GRAPHBUFFERWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8D7060)
#define MESSAGEPACK_GRAPHBUFFERWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x8D6F90)

namespace MessagePack
{
	inline static constexpr unsigned int GraphBufferWriter_TypeDefinitionIndex = 30727;

	struct alignas(8) GraphBufferWriter
	{
		::MessagePack::GraphMemoryStreamBufferWriter* _output; // 0x10
		::System::Span_1_9011FAD97750D224<::System::Byte> _span; // 0x18
		::System::Byte _padding0[0x10];
		::System::Int64 _bytesCommitted; // 0x30
		::MessagePack::GraphBufferWriter_MODE _workMode; // 0x38
		::System::Byte _padding1[0x4];
		::MessagePack::BufferWriter _wrapWriter; // 0x40

		::System::Void _ctor(::MessagePack::GraphMemoryStreamBufferWriter* output)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::GraphMemoryStreamBufferWriter*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER__CTOR_OFFSET))(this, output);
		}

		::System::Void _ctor_1(::MessagePack::SequencePool* sequencePool, ::Il2CppArray<::System::Byte>* array)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::SequencePool*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER__CTOR_1_OFFSET))(this, sequencePool, array);
		}

		::System::Span_1_9011FAD97750D224<::System::Byte> get_Span()
		{
			return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_GET_SPAN_OFFSET))(this);
		}

		::System::Int64 get_BytesCommitted()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_GET_BYTESCOMMITTED_OFFSET))(this);
		}

		::System::Span_1_9011FAD97750D224<::System::Byte> GetSpan(::System::Int32 sizeHint)
		{
			return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_GETSPAN_OFFSET))(this, sizeHint);
		}

		::System::Span_1_9011FAD97750D224<::System::Byte> GetRawSpan()
		{
			return ((::System::Span_1_9011FAD97750D224<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_GETRAWSPAN_OFFSET))(this);
		}

		::System::Byte& GetPointer(::System::Int32 sizeHint)
		{
			return ((::System::Byte&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_GETPOINTER_OFFSET))(this, sizeHint);
		}

		::System::Void Advance(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_ADVANCE_OFFSET))(this, count);
		}

		::System::Void Write(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> source)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_WRITE_OFFSET))(this, source);
		}

		::System::Void Ensure(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_ENSURE_OFFSET))(this, count);
		}

		::System::Boolean TryGetUncommittedSpan(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>& span)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_TRYGETUNCOMMITTEDSPAN_OFFSET))(this, span);
		}

		::System::Void EnsureMore(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_ENSUREMORE_OFFSET))(this, count);
		}

		::System::Void WriteMultiBuffer(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> source)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_GRAPHBUFFERWRITER_WRITEMULTIBUFFER_OFFSET))(this, source);
		}
	};
}
