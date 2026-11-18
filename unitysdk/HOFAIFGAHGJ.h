#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPODODIOMHF.h"

#define HOFAIFGAHGJ_ECOEGDPJNNG_OFFSET UNITYSDK_OFFSET(0x12E92270)
#define HOFAIFGAHGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12E92280)

inline static constexpr unsigned int HOFAIFGAHGJ_TypeDefinitionIndex = 60468;

class HOFAIFGAHGJ : public ::MPODODIOMHF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFAIFGAHGJ__CTOR_OFFSET))(this);
	}

	::System::Boolean ECOEGDPJNNG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFAIFGAHGJ_ECOEGDPJNNG_OFFSET))(this);
	}
};
