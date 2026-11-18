#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define PLPKGKPPGCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7FB4B0)

inline static constexpr unsigned int PLPKGKPPGCM_TypeDefinitionIndex = 42586;

class PLPKGKPPGCM : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPKGKPPGCM__CTOR_OFFSET))(this);
	}
};
