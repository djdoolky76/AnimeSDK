#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B307023728BB21F4_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x43FDDC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B307023728BB21F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_B307023728BB21F4_TypeDefinitionIndex = 19376;

	class Browser_B307023728BB21F4 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x10
		::System::Boolean A1C477CA5EFDEF2B; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B307023728BB21F4__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_B307023728BB21F4_BF3138F24160F012_OFFSET))(this);
		}
	};
}
