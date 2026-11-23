#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ED8EF8C9D2E3AA74.h"

namespace System { class String; }

#define F89F2BD7EC289CE8_F5C8F0C440493C37_OFFSET UNITYSDK_OFFSET(0x3EEAB50)
#define F89F2BD7EC289CE8__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F89F2BD7EC289CE8_TypeDefinitionIndex = 15175;

class F89F2BD7EC289CE8 : public ::ED8EF8C9D2E3AA74
{
public:
	::System::String* F5C8F0C440493C37()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F89F2BD7EC289CE8_F5C8F0C440493C37_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F89F2BD7EC289CE8__CTOR_OFFSET))(this);
	}
};
