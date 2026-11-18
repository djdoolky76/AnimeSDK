#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define FDJJGNEBNIC__CTOR_OFFSET UNITYSDK_OFFSET(0x156B78F0)

inline static constexpr unsigned int FDJJGNEBNIC_TypeDefinitionIndex = 53586;

class FDJJGNEBNIC : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJJGNEBNIC__CTOR_OFFSET))(this);
	}
};
