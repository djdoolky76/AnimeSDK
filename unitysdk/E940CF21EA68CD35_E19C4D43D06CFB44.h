#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define E940CF21EA68CD35_E19C4D43D06CFB44_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define E940CF21EA68CD35_E19C4D43D06CFB44__CTOR_OFFSET UNITYSDK_OFFSET(0x334B680)

inline static constexpr unsigned int E940CF21EA68CD35_E19C4D43D06CFB44_TypeDefinitionIndex = 11469;

class E940CF21EA68CD35_E19C4D43D06CFB44 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E940CF21EA68CD35_E19C4D43D06CFB44__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::IntPtr Invoke(::System::Int32 F2E014F34A4A1D04)
	{
		return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + E940CF21EA68CD35_E19C4D43D06CFB44_INVOKE_OFFSET))(this, F2E014F34A4A1D04);
	}
};
