#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FEF093930345F919_A9C896C0CA4185CE_OFFSET UNITYSDK_OFFSET(0x43FE680)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FEF093930345F919_AB9A1CADE1BEA9E1_OFFSET UNITYSDK_OFFSET(0x43FE680)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FEF093930345F919__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_FEF093930345F919_TypeDefinitionIndex = 19386;

	class Browser_FEF093930345F919 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Browser* FF6066255AAB857A; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FEF093930345F919__CTOR_OFFSET))(this);
		}

		::System::Void A9C896C0CA4185CE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FEF093930345F919_A9C896C0CA4185CE_OFFSET))(this);
		}

		::System::Void AB9A1CADE1BEA9E1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FEF093930345F919_AB9A1CADE1BEA9E1_OFFSET))(this);
		}
	};
}
