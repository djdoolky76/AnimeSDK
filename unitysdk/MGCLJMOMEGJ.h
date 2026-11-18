#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define MGCLJMOMEGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2D820)

inline static constexpr unsigned int MGCLJMOMEGJ_TypeDefinitionIndex = 66708;

class MGCLJMOMEGJ : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCLJMOMEGJ__CTOR_OFFSET))(this);
	}
};
