#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_F06B0A1E7343B846.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B65262A2D41F39BF_INVOKE_OFFSET UNITYSDK_OFFSET(0x2911D30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B65262A2D41F39BF__CTOR_OFFSET UNITYSDK_OFFSET(0x4408450)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_B65262A2D41F39BF_TypeDefinitionIndex = 19473;

	class BrowserNative_B65262A2D41F39BF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B65262A2D41F39BF__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F22A80DDEC881E7C, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_F06B0A1E7343B846 ADCF3FB26E313C57, ::System::IntPtr AEDD7B9270D1EBE6, ::System::IntPtr E7068D113E792DF4, ::System::IntPtr E6986D95B22BCBAF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_F06B0A1E7343B846, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_B65262A2D41F39BF_INVOKE_OFFSET))(this, F22A80DDEC881E7C, ADCF3FB26E313C57, AEDD7B9270D1EBE6, E7068D113E792DF4, E6986D95B22BCBAF);
		}
	};
}
