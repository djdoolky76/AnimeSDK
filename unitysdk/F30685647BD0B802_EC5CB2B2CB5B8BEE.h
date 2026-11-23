#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define F30685647BD0B802_EC5CB2B2CB5B8BEE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define F30685647BD0B802_EC5CB2B2CB5B8BEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

inline static constexpr unsigned int F30685647BD0B802_EC5CB2B2CB5B8BEE_TypeDefinitionIndex = 11817;

class F30685647BD0B802_EC5CB2B2CB5B8BEE : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_EC5CB2B2CB5B8BEE__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F30685647BD0B802_EC5CB2B2CB5B8BEE_INVOKE_OFFSET))(this);
	}
};
