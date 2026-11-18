#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDICCLLAODB.h"

#define FHNFLPLIPLO_HFHFMPOPPNB_OFFSET UNITYSDK_OFFSET(0x14AD4FA0)
#define FHNFLPLIPLO__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD5240)

inline static constexpr unsigned int FHNFLPLIPLO_TypeDefinitionIndex = 50371;

class FHNFLPLIPLO : public ::KDICCLLAODB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNFLPLIPLO__CTOR_OFFSET))(this);
	}

	::System::Int32 HFHFMPOPPNB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNFLPLIPLO_HFHFMPOPPNB_OFFSET))(this);
	}
};
