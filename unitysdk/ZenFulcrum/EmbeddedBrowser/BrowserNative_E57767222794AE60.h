#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E57767222794AE60_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E57767222794AE60__CTOR_OFFSET UNITYSDK_OFFSET(0x22B9540)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_E57767222794AE60_TypeDefinitionIndex = 19504;

	class BrowserNative_E57767222794AE60 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E57767222794AE60__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Boolean FBF3AC291087F95C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E57767222794AE60_INVOKE_OFFSET))(this, FBF3AC291087F95C);
		}
	};
}
