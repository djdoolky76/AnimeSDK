#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_A0F82EEEEC534CFE.h"

namespace System { class Object; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_AE7F5EAD3100E7A4; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E5F1F5CC0CDC69C7_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E5F1F5CC0CDC69C7__CTOR_OFFSET UNITYSDK_OFFSET(0x2936C90)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_E5F1F5CC0CDC69C7_TypeDefinitionIndex = 19551;

	class BrowserNative_E5F1F5CC0CDC69C7 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E5F1F5CC0CDC69C7__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_AE7F5EAD3100E7A4* F74A819D3F10B9E7, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_A0F82EEEEC534CFE BC288918C940C7A6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_AE7F5EAD3100E7A4*, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_A0F82EEEEC534CFE))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_E5F1F5CC0CDC69C7_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, F74A819D3F10B9E7, BC288918C940C7A6);
		}
	};
}
