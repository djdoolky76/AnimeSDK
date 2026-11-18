#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFGKFMHPANI.h"

#define DHCDPHNBMGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1833D910)

inline static constexpr unsigned int DHCDPHNBMGL_TypeDefinitionIndex = 66261;

class DHCDPHNBMGL : public ::IFGKFMHPANI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCDPHNBMGL__CTOR_OFFSET))(this);
	}
};
