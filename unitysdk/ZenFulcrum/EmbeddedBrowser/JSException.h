#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_JSEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F65F8C0)

namespace ZenFulcrum::EmbeddedBrowser
{
	class JSException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSEXCEPTION_CTOR_OFFSET))(this, a1);
		}

	};
}
