#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_A705336D5C9DF1CA.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FF58EB9408D0CA2C_INVOKE_OFFSET UNITYSDK_OFFSET(0x2F7D980)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FF58EB9408D0CA2C__CTOR_OFFSET UNITYSDK_OFFSET(0x2F7F890)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_FF58EB9408D0CA2C_TypeDefinitionIndex = 19507;

	class BrowserNative_FF58EB9408D0CA2C : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FF58EB9408D0CA2C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Boolean Invoke(::ZenFulcrum::EmbeddedBrowser::BrowserNative_A705336D5C9DF1CA B657584D50B81BBF)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_A705336D5C9DF1CA))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FF58EB9408D0CA2C_INVOKE_OFFSET))(this, B657584D50B81BBF);
		}
	};
}
