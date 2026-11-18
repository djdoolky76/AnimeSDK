#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define FIJCNHFMNEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD60A0)

inline static constexpr unsigned int FIJCNHFMNEM_TypeDefinitionIndex = 69029;

class FIJCNHFMNEM : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJCNHFMNEM__CTOR_OFFSET))(this);
	}
};
