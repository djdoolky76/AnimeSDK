#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EC5A64A1B2C9997F;
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AC3281387B8F83D7_A3E7DBA03C2A2CD6_OFFSET UNITYSDK_OFFSET(0x43FD810)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AC3281387B8F83D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_AC3281387B8F83D7_TypeDefinitionIndex = 19369;

	class Browser_AC3281387B8F83D7 : public ::System::Object
	{
	public:
		::EC5A64A1B2C9997F* F8DFA26EFDD76D30; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AC3281387B8F83D7__CTOR_OFFSET))(this);
		}

		::System::Void A3E7DBA03C2A2CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_AC3281387B8F83D7_A3E7DBA03C2A2CD6_OFFSET))(this);
		}
	};
}
