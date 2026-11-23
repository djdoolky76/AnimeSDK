#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace B536D316FBCD8D96 { class F823D4867D7789E7; }
namespace System { class Object; }

#define B536D316FBCD8D96_AB287726CAB4BACF_INVOKE_OFFSET UNITYSDK_OFFSET(0x374AE00)
#define B536D316FBCD8D96_AB287726CAB4BACF__CTOR_OFFSET UNITYSDK_OFFSET(0x427A480)

namespace B536D316FBCD8D96
{
	inline static constexpr unsigned int AB287726CAB4BACF_TypeDefinitionIndex = 13930;

	class AB287726CAB4BACF : public ::System::MulticastDelegate
	{
	public:
		::System::Single Invoke(::B536D316FBCD8D96::F823D4867D7789E7* EAC042D70811CC70, ::System::Single F5EF7E29767E03BF, ::System::Single F0961C93719F7B0D)
		{
			return ((::System::Single(*)(::PVOID, ::B536D316FBCD8D96::F823D4867D7789E7*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + B536D316FBCD8D96_AB287726CAB4BACF_INVOKE_OFFSET))(this, EAC042D70811CC70, F5EF7E29767E03BF, F0961C93719F7B0D);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B536D316FBCD8D96_AB287726CAB4BACF__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
