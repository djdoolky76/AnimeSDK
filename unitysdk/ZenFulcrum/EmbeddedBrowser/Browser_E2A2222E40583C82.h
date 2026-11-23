#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E2A2222E40583C82_A77FE2E7B909D39F_OFFSET UNITYSDK_OFFSET(0x43FDBE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E2A2222E40583C82__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_E2A2222E40583C82_TypeDefinitionIndex = 19372;

	class Browser_E2A2222E40583C82 : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* A544919C800E2923; // 0x10
		::System::String* B960AC235824C6C8; // 0x18
		::System::Boolean E21BC0C8A287D980; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E2A2222E40583C82__CTOR_OFFSET))(this);
		}

		::System::Void A77FE2E7B909D39F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E2A2222E40583C82_A77FE2E7B909D39F_OFFSET))(this);
		}
	};
}
