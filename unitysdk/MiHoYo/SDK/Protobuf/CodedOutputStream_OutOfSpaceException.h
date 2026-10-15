#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"

#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_OUTOFSPACEEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE36F0)

namespace MiHoYo::SDK::Protobuf
{
	class CodedOutputStream_OutOfSpaceException : public ::System::IO::IOException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_OUTOFSPACEEXCEPTION_CTOR_OFFSET))(this);
		}

	};
}
