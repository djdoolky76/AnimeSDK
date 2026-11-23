#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define F30685647BD0B802_A05925882AC149B8_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define F30685647BD0B802_A05925882AC149B8__CTOR_OFFSET UNITYSDK_OFFSET(0x31574C0)

inline static constexpr unsigned int F30685647BD0B802_A05925882AC149B8_TypeDefinitionIndex = 11812;

class F30685647BD0B802_A05925882AC149B8 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_A05925882AC149B8__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Boolean Invoke(::System::String* E02A3AE9356E2152)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F30685647BD0B802_A05925882AC149B8_INVOKE_OFFSET))(this, E02A3AE9356E2152);
	}
};
