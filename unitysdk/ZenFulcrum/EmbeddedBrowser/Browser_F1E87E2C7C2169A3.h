#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_F1E87E2C7C2169A3_ABB95BF3D86E2FC2_OFFSET UNITYSDK_OFFSET(0x43FDDF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_F1E87E2C7C2169A3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_F1E87E2C7C2169A3_TypeDefinitionIndex = 19377;

	class Browser_F1E87E2C7C2169A3 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x10
		::System::Boolean A450CAA3C0C5E2B4; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_F1E87E2C7C2169A3__CTOR_OFFSET))(this);
		}

		::System::Void ABB95BF3D86E2FC2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_F1E87E2C7C2169A3_ABB95BF3D86E2FC2_OFFSET))(this);
		}
	};
}
