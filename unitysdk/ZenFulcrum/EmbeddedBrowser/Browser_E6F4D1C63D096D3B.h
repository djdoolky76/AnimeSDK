#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class EC5A64A1B2C9997F;
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E6F4D1C63D096D3B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E6F4D1C63D096D3B__CTOR_OFFSET UNITYSDK_OFFSET(0x2991280)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_E6F4D1C63D096D3B_TypeDefinitionIndex = 19363;

	class Browser_E6F4D1C63D096D3B : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E6F4D1C63D096D3B__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::EC5A64A1B2C9997F* F0D3F87128A7C4CA)
		{
			return ((::System::Void(*)(::PVOID, ::EC5A64A1B2C9997F*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_E6F4D1C63D096D3B_INVOKE_OFFSET))(this, F0D3F87128A7C4CA);
		}
	};
}
