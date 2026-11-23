#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F1995C522EF36A7D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F1995C522EF36A7D__CTOR_OFFSET UNITYSDK_OFFSET(0x440A170)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_F1995C522EF36A7D_TypeDefinitionIndex = 19470;

	class BrowserNative_F1995C522EF36A7D : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F1995C522EF36A7D__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F22A80DDEC881E7C, ::System::Int32 F06C5A91BF20A641, ::System::String* F220A2D27F7C6B6C, ::System::Int32 F54AF627638DE3C9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F1995C522EF36A7D_INVOKE_OFFSET))(this, F22A80DDEC881E7C, F06C5A91BF20A641, F220A2D27F7C6B6C, F54AF627638DE3C9);
		}
	};
}
