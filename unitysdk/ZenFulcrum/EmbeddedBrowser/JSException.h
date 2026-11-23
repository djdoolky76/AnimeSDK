#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_JSEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x43F7A50)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int JSException_TypeDefinitionIndex = 19414;

	class JSException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* A70C711977AA3895)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSEXCEPTION__CTOR_OFFSET))(this, A70C711977AA3895);
		}
	};
}
