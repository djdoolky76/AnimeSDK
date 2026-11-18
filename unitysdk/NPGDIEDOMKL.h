#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define NPGDIEDOMKL__CTOR_OFFSET UNITYSDK_OFFSET(0x12907850)

inline static constexpr unsigned int NPGDIEDOMKL_TypeDefinitionIndex = 73367;

class NPGDIEDOMKL : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGDIEDOMKL__CTOR_OFFSET))(this);
	}
};
