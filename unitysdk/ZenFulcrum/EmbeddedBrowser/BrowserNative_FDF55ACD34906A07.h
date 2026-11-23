#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_EF024444949E9D91; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FDF55ACD34906A07_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FDF55ACD34906A07__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_FDF55ACD34906A07_TypeDefinitionIndex = 19501;

	class BrowserNative_FDF55ACD34906A07 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FDF55ACD34906A07__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::ZenFulcrum::EmbeddedBrowser::BrowserNative_EF024444949E9D91* EEEFDFD3EF601EF2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_EF024444949E9D91*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FDF55ACD34906A07_INVOKE_OFFSET))(this, EEEFDFD3EF601EF2);
		}
	};
}
