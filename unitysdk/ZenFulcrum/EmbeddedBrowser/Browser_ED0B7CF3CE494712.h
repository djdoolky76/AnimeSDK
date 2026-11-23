#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ED0B7CF3CE494712_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ED0B7CF3CE494712__CTOR_OFFSET UNITYSDK_OFFSET(0x3A00A00)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser_ED0B7CF3CE494712_TypeDefinitionIndex = 19366;

	class Browser_ED0B7CF3CE494712 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ED0B7CF3CE494712__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::ZenFulcrum::EmbeddedBrowser::Browser* AD0CAFBAFB8B01EA, ::System::Boolean A187B0A4ACA502FF)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSER_ED0B7CF3CE494712_INVOKE_OFFSET))(this, AD0CAFBAFB8B01EA, A187B0A4ACA502FF);
		}
	};
}
