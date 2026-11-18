#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPEBMBHIPKD.h"
#include "unitysdk/OIIGJNOAOFO.h"

#define EEKMEAFMIMC_EPBDEJLKEKH_OFFSET UNITYSDK_OFFSET(0x14149940)
#define EEKMEAFMIMC__CTOR_OFFSET UNITYSDK_OFFSET(0x141499D0)

inline static constexpr unsigned int EEKMEAFMIMC_TypeDefinitionIndex = 86103;

class EEKMEAFMIMC : public ::GPEBMBHIPKD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKMEAFMIMC__CTOR_OFFSET))(this);
	}

	::System::Boolean EPBDEJLKEKH(::OIIGJNOAOFO& EGGFIHLJHNO)
	{
		return ((::System::Boolean(*)(::PVOID, ::OIIGJNOAOFO&))((::PBYTE)hIl2Cpp + EEKMEAFMIMC_EPBDEJLKEKH_OFFSET))(this, EGGFIHLJHNO);
	}
};
