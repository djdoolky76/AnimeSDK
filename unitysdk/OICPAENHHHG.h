#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define OICPAENHHHG__CTOR_OFFSET UNITYSDK_OFFSET(0x15F71EB0)

inline static constexpr unsigned int OICPAENHHHG_TypeDefinitionIndex = 72574;

class OICPAENHHHG : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICPAENHHHG__CTOR_OFFSET))(this);
	}
};
