#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define IMENFJAPPEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1870F160)

inline static constexpr unsigned int IMENFJAPPEM_TypeDefinitionIndex = 57421;

class IMENFJAPPEM : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENFJAPPEM__CTOR_OFFSET))(this);
	}
};
