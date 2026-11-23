#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AC7E6963CDC64010_E7682A1C437044CF_OFFSET UNITYSDK_OFFSET(0x43FEB30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AC7E6963CDC64010__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_AC7E6963CDC64010_TypeDefinitionIndex = 19392;

	class Browser_AC7E6963CDC64010 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67; // 0x10
		::System::Int32 F22A80DDEC881E7C; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AC7E6963CDC64010__CTOR_OFFSET))(this);
		}

		::System::Void E7682A1C437044CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AC7E6963CDC64010_E7682A1C437044CF_OFFSET))(this);
		}
	};
}
