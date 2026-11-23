#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_A11D908F3AC31322.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A28295ABA25FB52B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A28295ABA25FB52B__CTOR_OFFSET UNITYSDK_OFFSET(0x4407820)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_A28295ABA25FB52B_TypeDefinitionIndex = 19534;

	class BrowserNative_A28295ABA25FB52B : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A28295ABA25FB52B__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_A11D908F3AC31322 A59E604D1E9B8ED2, ::System::Boolean EC6B72B5D968BDBE, ::System::Int32 BF022D2FD6739920)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_A11D908F3AC31322, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A28295ABA25FB52B_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, A59E604D1E9B8ED2, EC6B72B5D968BDBE, BF022D2FD6739920);
		}
	};
}
