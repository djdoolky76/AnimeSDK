#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_B7FE1B2B2D4FEB34.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EB0B84AFF7DA6907_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EB0B84AFF7DA6907__CTOR_OFFSET UNITYSDK_OFFSET(0x4407560)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_EB0B84AFF7DA6907_TypeDefinitionIndex = 19542;

	class BrowserNative_EB0B84AFF7DA6907 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EB0B84AFF7DA6907__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserNative_B7FE1B2B2D4FEB34 Invoke(::System::Int32 F5AEFA05C9F71B82, ::System::Int32& F5EF7E29767E03BF, ::System::Int32& F0961C93719F7B0D)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserNative_B7FE1B2B2D4FEB34(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EB0B84AFF7DA6907_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, F5EF7E29767E03BF, F0961C93719F7B0D);
		}
	};
}
