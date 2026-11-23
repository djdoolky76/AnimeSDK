#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E43597E0E0E3EAB9_B5CF469EB7E67DD8_OFFSET UNITYSDK_OFFSET(0x43FDB40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E43597E0E0E3EAB9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_E43597E0E0E3EAB9_TypeDefinitionIndex = 19371;

	class Browser_E43597E0E0E3EAB9 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x10
		::System::Int32 BB8C609F76620E45; // 0x18
		::System::Int32 A0A0D02932F12CFD; // 0x1C
		::System::Int32 B5F62894A37965D9; // 0x20
		::System::Int32 B41D6671933F015F; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E43597E0E0E3EAB9__CTOR_OFFSET))(this);
		}

		::System::Void B5CF469EB7E67DD8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E43597E0E0E3EAB9_B5CF469EB7E67DD8_OFFSET))(this);
		}
	};
}
