#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F1C88D94D252692E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F1C88D94D252692E__CTOR_OFFSET UNITYSDK_OFFSET(0x22B95F0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_F1C88D94D252692E_TypeDefinitionIndex = 19477;

	class BrowserNative_F1C88D94D252692E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F1C88D94D252692E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F22A80DDEC881E7C, ::System::Int32 A1639678F7640EDF, ::System::Int64 B97B637E9FCDB89B, ::System::Int64 A657E64ABC80086C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_F1C88D94D252692E_INVOKE_OFFSET))(this, F22A80DDEC881E7C, A1639678F7640EDF, B97B637E9FCDB89B, A657E64ABC80086C);
		}
	};
}
