#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define GEMBPEJOGFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA3F00)

inline static constexpr unsigned int GEMBPEJOGFO_TypeDefinitionIndex = 86222;

class GEMBPEJOGFO : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMBPEJOGFO__CTOR_OFFSET))(this);
	}
};
