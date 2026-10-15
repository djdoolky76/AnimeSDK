#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
#include "unitysdk/System/Span_1_0C0D59FF8BC7380B.h"
namespace System::IO { class Stream; }

#define MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_READ_OFFSET UNITYSDK_OFFSET(0x1BBD7CB0)
#define MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_WRITE_OFFSET UNITYSDK_OFFSET(0x1BBD8060)

namespace MessagePack
{
	class StreamPolyfillExtensions : public ::System::Object
	{
	public:
		static ::System::Int32 Read(::System::IO::Stream* a1, ::System::Span_1_0C0D59FF8BC7380B<::System::Byte> a2)
		{
			return ((::System::Int32(*)(::System::IO::Stream*, ::System::Span_1_0C0D59FF8BC7380B<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_READ_OFFSET))(a1, a2);
		}

		static ::System::Void Write(::System::IO::Stream* a1, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte> a2)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_STREAMPOLYFILLEXTENSIONS_WRITE_OFFSET))(a1, a2);
		}

	};
}
