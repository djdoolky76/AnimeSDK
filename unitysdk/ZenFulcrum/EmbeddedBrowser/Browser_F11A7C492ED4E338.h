#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/Browser_EBEFCC617FD40AC1.h"

class F05BF89E3494F5ED;
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_F11A7C492ED4E338_F158BE0FD9753F03_OFFSET UNITYSDK_OFFSET(0x43FDC40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_F11A7C492ED4E338__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_F11A7C492ED4E338_TypeDefinitionIndex = 19374;

	class Browser_F11A7C492ED4E338 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Browser_EBEFCC617FD40AC1 BC288918C940C7A6; // 0x18
		::System::Byte _padding0[0x4];
		::F05BF89E3494F5ED* EBE8736E61F59BD1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_F11A7C492ED4E338__CTOR_OFFSET))(this);
		}

		::System::Void F158BE0FD9753F03()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_F11A7C492ED4E338_F158BE0FD9753F03_OFFSET))(this);
		}
	};
}
