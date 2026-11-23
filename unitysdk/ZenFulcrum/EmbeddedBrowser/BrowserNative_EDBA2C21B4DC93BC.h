#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EDBA2C21B4DC93BC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EDBA2C21B4DC93BC__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_EDBA2C21B4DC93BC_TypeDefinitionIndex = 19506;

	class BrowserNative_EDBA2C21B4DC93BC : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EDBA2C21B4DC93BC__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_EDBA2C21B4DC93BC_INVOKE_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
