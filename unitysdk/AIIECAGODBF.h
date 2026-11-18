#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLHFONBEAAN.h"

#define AIIECAGODBF_OHDPCOIOMGF_OFFSET UNITYSDK_OFFSET(0x1647DC20)
#define AIIECAGODBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1647DBE0)

inline static constexpr unsigned int AIIECAGODBF_TypeDefinitionIndex = 60054;

class AIIECAGODBF : public ::OLHFONBEAAN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIECAGODBF__CTOR_OFFSET))(this);
	}

	::System::Boolean OHDPCOIOMGF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIECAGODBF_OHDPCOIOMGF_OFFSET))(this);
	}
};
