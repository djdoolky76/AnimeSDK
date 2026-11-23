#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A622135CD13DB41F_E5E0E2F489EF8606_OFFSET UNITYSDK_OFFSET(0x43FE6B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A622135CD13DB41F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_A622135CD13DB41F_TypeDefinitionIndex = 19387;

	class Browser_A622135CD13DB41F : public ::System::Object
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::Browser* F4DFD92A32442E67; // 0x10
		::System::Int32 F06C5A91BF20A641; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* F220A2D27F7C6B6C; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A622135CD13DB41F__CTOR_OFFSET))(this);
		}

		::System::Void E5E0E2F489EF8606()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_A622135CD13DB41F_E5E0E2F489EF8606_OFFSET))(this);
		}
	};
}
