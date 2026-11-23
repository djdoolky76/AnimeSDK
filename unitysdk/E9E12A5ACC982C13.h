#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ED9C0C0353CE7327.h"

namespace System::Security::Cryptography { class RSA; }

#define E9E12A5ACC982C13_AD1AB433C3F3F208_OFFSET UNITYSDK_OFFSET(0x3E7F080)
#define E9E12A5ACC982C13__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E9E12A5ACC982C13_TypeDefinitionIndex = 14949;

class E9E12A5ACC982C13 : public ::ED9C0C0353CE7327
{
public:
	::ED9C0C0353CE7327* AD1AB433C3F3F208(::System::Security::Cryptography::RSA* A0D61235CC4D7FF7)
	{
		return ((::ED9C0C0353CE7327*(*)(::PVOID, ::System::Security::Cryptography::RSA*))((::PBYTE)hIl2Cpp + E9E12A5ACC982C13_AD1AB433C3F3F208_OFFSET))(this, A0D61235CC4D7FF7);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9E12A5ACC982C13__CTOR_OFFSET))(this);
	}
};
