#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EB8AF9B0F7427E99_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EB8AF9B0F7427E99__CTOR_OFFSET UNITYSDK_OFFSET(0x3744B80)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_EB8AF9B0F7427E99_TypeDefinitionIndex = 19512;

	class BrowserNative_EB8AF9B0F7427E99 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EB8AF9B0F7427E99__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EB8AF9B0F7427E99_INVOKE_OFFSET))(this);
		}
	};
}
