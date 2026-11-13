#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS180_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDAC5E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS180_0__LOADHTML_B__0_OFFSET UNITYSDK_OFFSET(0x1DDB3A30)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___c__DisplayClass180_0_TypeDefinitionIndex = 40272;

	class Browser___c__DisplayClass180_0 : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::System::String* html; // 0x18
		::ZenFulcrum::EmbeddedBrowser::Browser* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS180_0_CTOR_OFFSET))(this);
		}

		::System::Void _LoadHTML_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER___C__DISPLAYCLASS180_0__LOADHTML_B__0_OFFSET))(this);
		}

	};
}
