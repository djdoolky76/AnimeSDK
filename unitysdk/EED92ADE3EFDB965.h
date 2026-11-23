#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E1816BB67E198386.h"

#define EED92ADE3EFDB965__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EED92ADE3EFDB965_TypeDefinitionIndex = 261;

class EED92ADE3EFDB965 : public ::E1816BB67E198386
{
public:
	::System::Single B290BDA6AED7E8B4; // 0x18
	::System::Single F3DCF321900CF5E4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EED92ADE3EFDB965__CTOR_OFFSET))(this);
	}
};
