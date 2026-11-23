#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_A5488DB6E98A1A11.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FB6C10A99A3C687E_E6EF90249BD921C8_OFFSET UNITYSDK_OFFSET(0x43FE940)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FB6C10A99A3C687E_EF6C7983C0EB5C63_OFFSET UNITYSDK_OFFSET(0x43FE8D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FB6C10A99A3C687E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_FB6C10A99A3C687E_TypeDefinitionIndex = 19388;

	class Browser_FB6C10A99A3C687E : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67; // 0x10
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_A5488DB6E98A1A11 A4B74CE1B116797A; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* ADB2CD9F5DF7E145; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FB6C10A99A3C687E__CTOR_OFFSET))(this);
		}

		::System::Void EF6C7983C0EB5C63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FB6C10A99A3C687E_EF6C7983C0EB5C63_OFFSET))(this);
		}

		::System::Void E6EF90249BD921C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FB6C10A99A3C687E_E6EF90249BD921C8_OFFSET))(this);
		}
	};
}
