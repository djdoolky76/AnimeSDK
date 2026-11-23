#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_EF64CC013926213D.h"

namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F0A6D6DAA490C489_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F0A6D6DAA490C489__CTOR_OFFSET UNITYSDK_OFFSET(0x44071D0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_F0A6D6DAA490C489_TypeDefinitionIndex = 19553;

	class BrowserNative_F0A6D6DAA490C489 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F0A6D6DAA490C489__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::System::Int32 EBE1E85BB5F00BE9, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_EF64CC013926213D A05B43D4AA20B471, ::System::String* B823BD107ED98484)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_EF64CC013926213D, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F0A6D6DAA490C489_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, EBE1E85BB5F00BE9, A05B43D4AA20B471, B823BD107ED98484);
		}
	};
}
