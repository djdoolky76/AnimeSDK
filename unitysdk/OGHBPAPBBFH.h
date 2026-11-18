#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define OGHBPAPBBFH__CTOR_OFFSET UNITYSDK_OFFSET(0x1292E750)

inline static constexpr unsigned int OGHBPAPBBFH_TypeDefinitionIndex = 45086;

class OGHBPAPBBFH : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHBPAPBBFH__CTOR_OFFSET))(this);
	}
};
