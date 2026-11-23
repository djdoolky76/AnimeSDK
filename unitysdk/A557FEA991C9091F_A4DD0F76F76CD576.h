#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A557FEA991C9091F_A4DD0F76F76CD576_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A557FEA991C9091F_A4DD0F76F76CD576__CTOR_OFFSET UNITYSDK_OFFSET(0x22B9540)

inline static constexpr unsigned int A557FEA991C9091F_A4DD0F76F76CD576_TypeDefinitionIndex = 7186;

class A557FEA991C9091F_A4DD0F76F76CD576 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A557FEA991C9091F_A4DD0F76F76CD576__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Boolean F9568861EFAAC8F7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A557FEA991C9091F_A4DD0F76F76CD576_INVOKE_OFFSET))(this, F9568861EFAAC8F7);
	}
};
