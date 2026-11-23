#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EC5A64A1B2C9997F;
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E81D403479D12320_F6350B82ECE6FA18_OFFSET UNITYSDK_OFFSET(0x43FD5F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E81D403479D12320__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_E81D403479D12320_TypeDefinitionIndex = 19368;

	class Browser_E81D403479D12320 : public ::System::Object
	{
	public:
		::EC5A64A1B2C9997F* F8DFA26EFDD76D30; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E81D403479D12320__CTOR_OFFSET))(this);
		}

		::System::Void F6350B82ECE6FA18()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E81D403479D12320_F6350B82ECE6FA18_OFFSET))(this);
		}
	};
}
