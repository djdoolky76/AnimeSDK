#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define B4E3E6BCD1056F55_FFDC33ACC7EBDE1C_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define B4E3E6BCD1056F55_FFDC33ACC7EBDE1C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6400)

inline static constexpr unsigned int B4E3E6BCD1056F55_FFDC33ACC7EBDE1C_TypeDefinitionIndex = 8160;

class B4E3E6BCD1056F55_FFDC33ACC7EBDE1C : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B4E3E6BCD1056F55_FFDC33ACC7EBDE1C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Int32 B9837C7BFDC7D0FC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + B4E3E6BCD1056F55_FFDC33ACC7EBDE1C_INVOKE_OFFSET))(this, B9837C7BFDC7D0FC);
	}
};
