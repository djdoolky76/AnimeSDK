#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HCFAKOOBNBM__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEAC30)

inline static constexpr unsigned int HCFAKOOBNBM_TypeDefinitionIndex = 84476;

class HCFAKOOBNBM : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFAKOOBNBM__CTOR_OFFSET))(this);
	}
};
