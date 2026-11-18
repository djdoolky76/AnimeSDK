#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define AIOKJILFMCO__CTOR_OFFSET UNITYSDK_OFFSET(0x143A6FD0)

inline static constexpr unsigned int AIOKJILFMCO_TypeDefinitionIndex = 57980;

class AIOKJILFMCO : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOKJILFMCO__CTOR_OFFSET))(this);
	}
};
