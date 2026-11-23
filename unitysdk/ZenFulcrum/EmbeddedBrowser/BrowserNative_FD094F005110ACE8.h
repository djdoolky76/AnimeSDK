#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FD094F005110ACE8_INVOKE_OFFSET UNITYSDK_OFFSET(0x4407280)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FD094F005110ACE8__CTOR_OFFSET UNITYSDK_OFFSET(0x44072A0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_FD094F005110ACE8_TypeDefinitionIndex = 19539;

	class BrowserNative_FD094F005110ACE8 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FD094F005110ACE8__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82, ::System::String* BB0F4327154F0C01, ::System::String* AECB6FB250F26E28, ::System::Boolean A6B5840567522F01, ::System::Int32 BCCC5EF00D9F90C5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_FD094F005110ACE8_INVOKE_OFFSET))(this, F5AEFA05C9F71B82, BB0F4327154F0C01, AECB6FB250F26E28, A6B5840567522F01, BCCC5EF00D9F90C5);
		}
	};
}
