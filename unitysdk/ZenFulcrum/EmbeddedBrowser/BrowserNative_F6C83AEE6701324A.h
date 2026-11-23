#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_E7E43FD39A1F03DB.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F6C83AEE6701324A_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F6C83AEE6701324A__CTOR_OFFSET UNITYSDK_OFFSET(0x32B6DB0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_F6C83AEE6701324A_TypeDefinitionIndex = 19530;

	class BrowserNative_F6C83AEE6701324A : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F6C83AEE6701324A__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_E7E43FD39A1F03DB A70C711977AA3895)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_E7E43FD39A1F03DB))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F6C83AEE6701324A_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, A70C711977AA3895);
		}
	};
}
