#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A750DA76F1790975_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A750DA76F1790975__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_A750DA76F1790975_TypeDefinitionIndex = 19365;

	class Browser_A750DA76F1790975 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A750DA76F1790975__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A750DA76F1790975_INVOKE_OFFSET))(this);
		}
	};
}
