#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define F30685647BD0B802_A5DDBB2FEEE49200_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define F30685647BD0B802_A5DDBB2FEEE49200__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int F30685647BD0B802_A5DDBB2FEEE49200_TypeDefinitionIndex = 11837;

class F30685647BD0B802_A5DDBB2FEEE49200 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F30685647BD0B802_A5DDBB2FEEE49200__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* E97E8D008427A296)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F30685647BD0B802_A5DDBB2FEEE49200_INVOKE_OFFSET))(this, E97E8D008427A296);
	}
};
