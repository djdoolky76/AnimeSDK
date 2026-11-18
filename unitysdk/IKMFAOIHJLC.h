#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define IKMFAOIHJLC__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB7940)

inline static constexpr unsigned int IKMFAOIHJLC_TypeDefinitionIndex = 89704;

class IKMFAOIHJLC : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMFAOIHJLC__CTOR_OFFSET))(this);
	}
};
