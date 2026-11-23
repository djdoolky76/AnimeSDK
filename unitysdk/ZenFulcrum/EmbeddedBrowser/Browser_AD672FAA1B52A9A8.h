#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EC5A64A1B2C9997F;
namespace ZenFulcrum::EmbeddedBrowser { class Browser_E6F4D1C63D096D3B; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AD672FAA1B52A9A8_B8007CCC2754D3CB_OFFSET UNITYSDK_OFFSET(0x2A25370)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AD672FAA1B52A9A8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_AD672FAA1B52A9A8_TypeDefinitionIndex = 19384;

	class Browser_AD672FAA1B52A9A8 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser_E6F4D1C63D096D3B* E04D2BE64FCE9814; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AD672FAA1B52A9A8__CTOR_OFFSET))(this);
		}

		::System::Void B8007CCC2754D3CB(::EC5A64A1B2C9997F* E937D4885DAA1AE8, ::System::Boolean E22BCD4736CD9DF9)
		{
			return ((::System::Void(*)(::PVOID, ::EC5A64A1B2C9997F*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AD672FAA1B52A9A8_B8007CCC2754D3CB_OFFSET))(this, E937D4885DAA1AE8, E22BCD4736CD9DF9);
		}
	};
}
