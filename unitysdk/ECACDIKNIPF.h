#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define ECACDIKNIPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1062BF10)

inline static constexpr unsigned int ECACDIKNIPF_TypeDefinitionIndex = 44213;

class ECACDIKNIPF : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECACDIKNIPF__CTOR_OFFSET))(this);
	}
};
