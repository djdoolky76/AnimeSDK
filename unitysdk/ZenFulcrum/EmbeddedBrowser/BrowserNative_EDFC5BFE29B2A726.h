#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_A5488DB6E98A1A11.h"

namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EDFC5BFE29B2A726_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EDFC5BFE29B2A726__CTOR_OFFSET UNITYSDK_OFFSET(0x32B7970)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_EDFC5BFE29B2A726_TypeDefinitionIndex = 19472;

	class BrowserNative_EDFC5BFE29B2A726 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EDFC5BFE29B2A726__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F22A80DDEC881E7C, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_A5488DB6E98A1A11 A4B74CE1B116797A, ::System::String* ADB2CD9F5DF7E145)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_A5488DB6E98A1A11, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EDFC5BFE29B2A726_INVOKE_OFFSET))(this, F22A80DDEC881E7C, A4B74CE1B116797A, ADB2CD9F5DF7E145);
		}
	};
}
