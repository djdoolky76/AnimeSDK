#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A00F3F7FCAD8C481_INVOKE_OFFSET UNITYSDK_OFFSET(0x2911D30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A00F3F7FCAD8C481__CTOR_OFFSET UNITYSDK_OFFSET(0x4407400)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_A00F3F7FCAD8C481_TypeDefinitionIndex = 19517;

	class BrowserNative_A00F3F7FCAD8C481 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A00F3F7FCAD8C481__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::System::Int32 BB8C609F76620E45, ::System::Int32 A0A0D02932F12CFD, ::System::Int32 B5F62894A37965D9, ::System::Int32 B41D6671933F015F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_A00F3F7FCAD8C481_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, BB8C609F76620E45, A0A0D02932F12CFD, B5F62894A37965D9, B41D6671933F015F);
		}
	};
}
