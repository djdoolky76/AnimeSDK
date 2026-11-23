#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A34A620851CF34DD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A34A620851CF34DD__CTOR_OFFSET UNITYSDK_OFFSET(0x4407120)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_A34A620851CF34DD_TypeDefinitionIndex = 19496;

	class BrowserNative_A34A620851CF34DD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A34A620851CF34DD__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::IntPtr BADCD2C933ABE188, ::System::IntPtr B3E3A8495E17DE76, ::System::Int32 B98030ED206894D2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A34A620851CF34DD_INVOKE_OFFSET))(this, BADCD2C933ABE188, B3E3A8495E17DE76, B98030ED206894D2);
		}
	};
}
