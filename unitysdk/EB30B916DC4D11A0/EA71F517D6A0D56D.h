#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class B8FAD569CE79AAEB;
namespace System { class Object; }
namespace System { class String; }

#define EB30B916DC4D11A0_EA71F517D6A0D56D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define EB30B916DC4D11A0_EA71F517D6A0D56D__CTOR_OFFSET UNITYSDK_OFFSET(0x20F9B00)

namespace EB30B916DC4D11A0
{
	inline static constexpr unsigned int EA71F517D6A0D56D_TypeDefinitionIndex = 15468;

	class EA71F517D6A0D56D : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::B8FAD569CE79AAEB* AD0CAFBAFB8B01EA, ::System::String* E74700DF48C501C9)
		{
			return ((::System::Void(*)(::PVOID, ::B8FAD569CE79AAEB*, ::System::String*))((::PBYTE)hIl2Cpp + EB30B916DC4D11A0_EA71F517D6A0D56D_INVOKE_OFFSET))(this, AD0CAFBAFB8B01EA, E74700DF48C501C9);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EB30B916DC4D11A0_EA71F517D6A0D56D__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
