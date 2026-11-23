#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_F06B0A1E7343B846.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B4356C889594893F_E4F4FF3E9799C768_OFFSET UNITYSDK_OFFSET(0x43FE970)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B4356C889594893F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_B4356C889594893F_TypeDefinitionIndex = 19389;

	class Browser_B4356C889594893F : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67; // 0x10
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_F06B0A1E7343B846 ADCF3FB26E313C57; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* E97E8D008427A296; // 0x20
		::System::String* B79EF86685D6458F; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B4356C889594893F__CTOR_OFFSET))(this);
		}

		::System::Void E4F4FF3E9799C768()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B4356C889594893F_E4F4FF3E9799C768_OFFSET))(this);
		}
	};
}
