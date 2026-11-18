#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define DDBAGAHFCHH__CTOR_OFFSET UNITYSDK_OFFSET(0x132887C0)

inline static constexpr unsigned int DDBAGAHFCHH_TypeDefinitionIndex = 80722;

class DDBAGAHFCHH : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBAGAHFCHH__CTOR_OFFSET))(this);
	}
};
