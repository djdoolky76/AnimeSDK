#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FD0E7CD5A6BED5CA_E8290DC048518FB1_OFFSET UNITYSDK_OFFSET(0x43FDFD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FD0E7CD5A6BED5CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_FD0E7CD5A6BED5CA_TypeDefinitionIndex = 19379;

	class Browser_FD0E7CD5A6BED5CA : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x10
		::System::Single E937D4885DAA1AE8; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FD0E7CD5A6BED5CA__CTOR_OFFSET))(this);
		}

		::System::Void E8290DC048518FB1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_FD0E7CD5A6BED5CA_E8290DC048518FB1_OFFSET))(this);
		}
	};
}
