#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_INVALIDJSONNODEEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F65F860)

namespace ZenFulcrum::EmbeddedBrowser
{
	class InvalidJSONNodeException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_INVALIDJSONNODEEXCEPTION_CTOR_OFFSET))(this);
		}

	};
}
