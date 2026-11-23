#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E5DB77DEA39D3D74_AD1F506F2F433EF5_OFFSET UNITYSDK_OFFSET(0x43FDF40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E5DB77DEA39D3D74__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_E5DB77DEA39D3D74_TypeDefinitionIndex = 19378;

	class Browser_E5DB77DEA39D3D74 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x10
		::System::Int32 F5EF7E29767E03BF; // 0x18
		::System::Int32 F0961C93719F7B0D; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E5DB77DEA39D3D74__CTOR_OFFSET))(this);
		}

		::System::Void AD1F506F2F433EF5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E5DB77DEA39D3D74_AD1F506F2F433EF5_OFFSET))(this);
		}
	};
}
