#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_AE7F5EAD3100E7A4; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ADAB82FDEDF2011E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ADAB82FDEDF2011E__CTOR_OFFSET UNITYSDK_OFFSET(0x2991280)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_ADAB82FDEDF2011E_TypeDefinitionIndex = 19475;

	class BrowserNative_ADAB82FDEDF2011E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ADAB82FDEDF2011E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::ZenFulcrum::EmbeddedBrowser::BrowserNative_AE7F5EAD3100E7A4* F74A819D3F10B9E7)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_AE7F5EAD3100E7A4*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_ADAB82FDEDF2011E_INVOKE_OFFSET))(this, F74A819D3F10B9E7);
		}
	};
}
