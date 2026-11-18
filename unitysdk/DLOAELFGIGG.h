#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define DLOAELFGIGG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB5FF0)

inline static constexpr unsigned int DLOAELFGIGG_TypeDefinitionIndex = 42882;

class DLOAELFGIGG : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOAELFGIGG__CTOR_OFFSET))(this);
	}
};
