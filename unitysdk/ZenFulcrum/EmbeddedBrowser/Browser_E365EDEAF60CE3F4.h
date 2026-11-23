#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E365EDEAF60CE3F4_BF6F3D5CADAA0E80_OFFSET UNITYSDK_OFFSET(0x43FE9D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E365EDEAF60CE3F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_E365EDEAF60CE3F4_TypeDefinitionIndex = 19390;

	class Browser_E365EDEAF60CE3F4 : public ::System::Object
	{
	public:
		::System::String* F1DA3CEDFEA65142; // 0x10
		::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67; // 0x18
		::System::Int32 BB8C609F76620E45; // 0x20
		::System::Int32 A0A0D02932F12CFD; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E365EDEAF60CE3F4__CTOR_OFFSET))(this);
		}

		::System::Void BF6F3D5CADAA0E80()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E365EDEAF60CE3F4_BF6F3D5CADAA0E80_OFFSET))(this);
		}
	};
}
