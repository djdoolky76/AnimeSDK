#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define LMMCAJCKDGF__CTOR_OFFSET UNITYSDK_OFFSET(0x16C67BD0)

inline static constexpr unsigned int LMMCAJCKDGF_TypeDefinitionIndex = 57223;

class LMMCAJCKDGF : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMCAJCKDGF__CTOR_OFFSET))(this);
	}
};
