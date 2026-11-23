#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E2A15C335CC97996_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E2A15C335CC97996__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_E2A15C335CC97996_TypeDefinitionIndex = 19505;

	class BrowserNative_E2A15C335CC97996 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E2A15C335CC97996__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E2A15C335CC97996_INVOKE_OFFSET))(this);
		}
	};
}
