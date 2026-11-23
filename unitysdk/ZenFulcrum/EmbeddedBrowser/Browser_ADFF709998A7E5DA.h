#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADFF709998A7E5DA_E08390E6EBEC5F0E_OFFSET UNITYSDK_OFFSET(0x43FE000)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADFF709998A7E5DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_ADFF709998A7E5DA_TypeDefinitionIndex = 19380;

	class Browser_ADFF709998A7E5DA : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x10
		::System::Boolean E937D4885DAA1AE8; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADFF709998A7E5DA__CTOR_OFFSET))(this);
		}

		::System::Void E08390E6EBEC5F0E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ADFF709998A7E5DA_E08390E6EBEC5F0E_OFFSET))(this);
		}
	};
}
