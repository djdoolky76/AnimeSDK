#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_F4FA6F5F900628D4.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_BF8C8DAE4ED8C854_INVOKE_OFFSET UNITYSDK_OFFSET(0x3FD5140)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_BF8C8DAE4ED8C854__CTOR_OFFSET UNITYSDK_OFFSET(0x44074B0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_BF8C8DAE4ED8C854_TypeDefinitionIndex = 19523;

	class BrowserNative_BF8C8DAE4ED8C854 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_BF8C8DAE4ED8C854__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserNative_F4FA6F5F900628D4 Invoke(::System::Int32 F5AEFA05C9F71B82, ::System::Boolean E495A1DB8C915FFC)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserNative_F4FA6F5F900628D4(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_BF8C8DAE4ED8C854_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, E495A1DB8C915FFC);
		}
	};
}
