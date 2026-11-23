#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_AAE6EB04EED0FBF9; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E50FE1D9ADD621CD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E50FE1D9ADD621CD__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_E50FE1D9ADD621CD_TypeDefinitionIndex = 19500;

	class BrowserNative_E50FE1D9ADD621CD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E50FE1D9ADD621CD__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::ZenFulcrum::EmbeddedBrowser::BrowserNative_AAE6EB04EED0FBF9* F465763CA56E13C8)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_AAE6EB04EED0FBF9*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E50FE1D9ADD621CD_INVOKE_OFFSET))(this, F465763CA56E13C8);
		}
	};
}
