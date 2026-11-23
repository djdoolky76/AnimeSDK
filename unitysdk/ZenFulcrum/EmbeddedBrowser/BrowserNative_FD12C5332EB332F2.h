#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_B48363129326E2FA.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FD12C5332EB332F2_INVOKE_OFFSET UNITYSDK_OFFSET(0x2D123A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FD12C5332EB332F2__CTOR_OFFSET UNITYSDK_OFFSET(0x3747760)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_FD12C5332EB332F2_TypeDefinitionIndex = 19510;

	class BrowserNative_FD12C5332EB332F2 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FD12C5332EB332F2__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Int32 Invoke(::ZenFulcrum::EmbeddedBrowser::BrowserNative_B48363129326E2FA B657584D50B81BBF)
		{
			return ((::System::Int32(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_B48363129326E2FA))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FD12C5332EB332F2_INVOKE_OFFSET))(this, B657584D50B81BBF);
		}
	};
}
