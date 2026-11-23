#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E78FAA7786AD4931_F274F42B6C4EEDD5_OFFSET UNITYSDK_OFFSET(0x43FECB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E78FAA7786AD4931__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_E78FAA7786AD4931_TypeDefinitionIndex = 19395;

	class Browser_E78FAA7786AD4931 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67; // 0x10
		::System::Int32 F38BBDFFBA920900; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E78FAA7786AD4931__CTOR_OFFSET))(this);
		}

		::System::Void F274F42B6C4EEDD5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E78FAA7786AD4931_F274F42B6C4EEDD5_OFFSET))(this);
		}
	};
}
