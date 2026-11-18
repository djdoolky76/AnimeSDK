#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define CDFDGFLPPCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14542CA0)

inline static constexpr unsigned int CDFDGFLPPCJ_TypeDefinitionIndex = 85077;

class CDFDGFLPPCJ : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDFDGFLPPCJ__CTOR_OFFSET))(this);
	}
};
