#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B3097579F1C5ABDF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B3097579F1C5ABDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6400)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_B3097579F1C5ABDF_TypeDefinitionIndex = 19519;

	class BrowserNative_B3097579F1C5ABDF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B3097579F1C5ABDF__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B3097579F1C5ABDF_INVOKE_OFFSET))(this, F5AEFA05C9F71B82);
		}
	};
}
