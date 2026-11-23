#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F99F554F0AC2B8C3.h"

class A2255F4B9978A3BD;

#define FF1985783500C392_E1C67F23C6641A1F_OFFSET UNITYSDK_OFFSET(0x1666EB0)
#define FF1985783500C392__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FF1985783500C392_TypeDefinitionIndex = 21;

class FF1985783500C392 : public ::F99F554F0AC2B8C3
{
public:
	::System::Boolean E1C67F23C6641A1F(::A2255F4B9978A3BD* F5BA898E96D1FD0D)
	{
		return ((::System::Boolean(*)(::PVOID, ::A2255F4B9978A3BD*))((::PBYTE)hIl2Cpp + FF1985783500C392_E1C67F23C6641A1F_OFFSET))(this, F5BA898E96D1FD0D);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF1985783500C392__CTOR_OFFSET))(this);
	}
};
