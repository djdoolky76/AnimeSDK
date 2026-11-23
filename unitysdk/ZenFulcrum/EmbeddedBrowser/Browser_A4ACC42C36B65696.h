#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A4ACC42C36B65696_E78A20ADA024FA69_OFFSET UNITYSDK_OFFSET(0x43FEC60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A4ACC42C36B65696__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_A4ACC42C36B65696_TypeDefinitionIndex = 19394;

	class Browser_A4ACC42C36B65696 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67; // 0x10
		::System::Int32 F22A80DDEC881E7C; // 0x18
		::System::Int32 A1639678F7640EDF; // 0x1C
		::System::Int64 B97B637E9FCDB89B; // 0x20
		::System::Int64 A657E64ABC80086C; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A4ACC42C36B65696__CTOR_OFFSET))(this);
		}

		::System::Void E78A20ADA024FA69()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A4ACC42C36B65696_E78A20ADA024FA69_OFFSET))(this);
		}
	};
}
