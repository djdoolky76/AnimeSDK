#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define MAOINLOCPJI__CTOR_OFFSET UNITYSDK_OFFSET(0x15E16C10)

inline static constexpr unsigned int MAOINLOCPJI_TypeDefinitionIndex = 54454;

class MAOINLOCPJI : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINLOCPJI__CTOR_OFFSET))(this);
	}
};
