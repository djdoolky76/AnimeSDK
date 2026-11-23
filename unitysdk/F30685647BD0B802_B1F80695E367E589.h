#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define F30685647BD0B802_B1F80695E367E589_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define F30685647BD0B802_B1F80695E367E589__CTOR_OFFSET UNITYSDK_OFFSET(0x3744C30)

inline static constexpr unsigned int F30685647BD0B802_B1F80695E367E589_TypeDefinitionIndex = 11820;

class F30685647BD0B802_B1F80695E367E589 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_B1F80695E367E589__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F30685647BD0B802_B1F80695E367E589_INVOKE_OFFSET))(this);
	}
};
