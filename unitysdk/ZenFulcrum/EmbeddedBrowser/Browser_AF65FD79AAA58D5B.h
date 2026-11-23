#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_B9933E67A5F1924E.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AF65FD79AAA58D5B_A40B286B3868C563_OFFSET UNITYSDK_OFFSET(0x43FDC70)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AF65FD79AAA58D5B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_AF65FD79AAA58D5B_TypeDefinitionIndex = 19375;

	class Browser_AF65FD79AAA58D5B : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x10
		::ZenFulcrum::EmbeddedBrowser::BrowserNative_B9933E67A5F1924E A05B43D4AA20B471; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AF65FD79AAA58D5B__CTOR_OFFSET))(this);
		}

		::System::Void A40B286B3868C563()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AF65FD79AAA58D5B_A40B286B3868C563_OFFSET))(this);
		}
	};
}
