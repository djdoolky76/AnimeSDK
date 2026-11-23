#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define F9874422644484EC_B5A4B12FC580F4C0_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define F9874422644484EC_B5A4B12FC580F4C0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

inline static constexpr unsigned int F9874422644484EC_B5A4B12FC580F4C0_TypeDefinitionIndex = 15346;

class F9874422644484EC_B5A4B12FC580F4C0 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F9874422644484EC_B5A4B12FC580F4C0__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9874422644484EC_B5A4B12FC580F4C0_INVOKE_OFFSET))(this);
	}
};
