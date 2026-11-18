#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace System::IO { class Stream; }

#define MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_READ_OFFSET UNITYSDK_OFFSET(0x1D5E38D0)
#define MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_WRITE_OFFSET UNITYSDK_OFFSET(0x1D5E3B70)

namespace MessagePack
{
	inline static constexpr unsigned int StreamPolyfillExtensions_TypeDefinitionIndex = 30347;

	class StreamPolyfillExtensions : public ::System::Object
	{
	public:
		static ::System::Int32 Read(::System::IO::Stream* stream, ::System::Span_1_9011FAD97750D224<::System::Byte> buffer)
		{
			return ((::System::Int32(*)(::System::IO::Stream*, ::System::Span_1_9011FAD97750D224<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_READ_OFFSET))(stream, buffer);
		}

		static ::System::Void Write(::System::IO::Stream* stream, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> buffer)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_WRITE_OFFSET))(stream, buffer);
		}
	};
}
