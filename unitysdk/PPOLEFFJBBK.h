#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPEBMBHIPKD.h"
#include "unitysdk/OIIGJNOAOFO.h"

#define PPOLEFFJBBK_EPBDEJLKEKH_OFFSET UNITYSDK_OFFSET(0x1374BF30)
#define PPOLEFFJBBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1374BFC0)

inline static constexpr unsigned int PPOLEFFJBBK_TypeDefinitionIndex = 44999;

class PPOLEFFJBBK : public ::GPEBMBHIPKD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOLEFFJBBK__CTOR_OFFSET))(this);
	}

	::System::Boolean EPBDEJLKEKH(::OIIGJNOAOFO& EGGFIHLJHNO)
	{
		return ((::System::Boolean(*)(::PVOID, ::OIIGJNOAOFO&))((::PBYTE)hIl2Cpp + PPOLEFFJBBK_EPBDEJLKEKH_OFFSET))(this, EGGFIHLJHNO);
	}
};
