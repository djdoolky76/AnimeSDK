#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define PHEBKDFONNH__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9D520)

inline static constexpr unsigned int PHEBKDFONNH_TypeDefinitionIndex = 90835;

class PHEBKDFONNH : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEBKDFONNH__CTOR_OFFSET))(this);
	}
};
