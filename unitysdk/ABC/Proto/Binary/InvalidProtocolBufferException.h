#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"

namespace System { class String; }

#define ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION_INVALIDTAG_OFFSET UNITYSDK_OFFSET(0x2715440)
#define ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION_MALFORMEDVARINT_OFFSET UNITYSDK_OFFSET(0x27154E0)
#define ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION_MOREDATAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x2715580)
#define ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION_NEGATIVESIZE_OFFSET UNITYSDK_OFFSET(0x2715620)
#define ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION_RECURSIONLIMITEXCEEDED_OFFSET UNITYSDK_OFFSET(0x27156C0)
#define ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION_SIZELIMITEXCEEDED_OFFSET UNITYSDK_OFFSET(0x2715760)
#define ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION_TRUNCATEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x2715800)
#define ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x27158A0)

namespace ABC::Proto::Binary
{
	inline static constexpr unsigned int InvalidProtocolBufferException_TypeDefinitionIndex = 2942;

	class InvalidProtocolBufferException : public ::System::IO::IOException
	{
	public:
		::System::Void _ctor(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION__CTOR_OFFSET))(this, B083BE7841B347C4);
		}

		static ::ABC::Proto::Binary::InvalidProtocolBufferException* RecursionLimitExceeded()
		{
			return ((::ABC::Proto::Binary::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION_RECURSIONLIMITEXCEEDED_OFFSET))();
		}

		static ::ABC::Proto::Binary::InvalidProtocolBufferException* MalformedVarint()
		{
			return ((::ABC::Proto::Binary::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION_MALFORMEDVARINT_OFFSET))();
		}

		static ::ABC::Proto::Binary::InvalidProtocolBufferException* TruncatedMessage()
		{
			return ((::ABC::Proto::Binary::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION_TRUNCATEDMESSAGE_OFFSET))();
		}

		static ::ABC::Proto::Binary::InvalidProtocolBufferException* NegativeSize()
		{
			return ((::ABC::Proto::Binary::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION_NEGATIVESIZE_OFFSET))();
		}

		static ::ABC::Proto::Binary::InvalidProtocolBufferException* MoreDataAvailable()
		{
			return ((::ABC::Proto::Binary::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION_MOREDATAAVAILABLE_OFFSET))();
		}

		static ::ABC::Proto::Binary::InvalidProtocolBufferException* SizeLimitExceeded()
		{
			return ((::ABC::Proto::Binary::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION_SIZELIMITEXCEEDED_OFFSET))();
		}

		static ::ABC::Proto::Binary::InvalidProtocolBufferException* InvalidTag()
		{
			return ((::ABC::Proto::Binary::InvalidProtocolBufferException*(*)())((::PBYTE)hIl2Cpp + ABC_PROTO_BINARY_INVALIDPROTOCOLBUFFEREXCEPTION_INVALIDTAG_OFFSET))();
		}
	};
}
