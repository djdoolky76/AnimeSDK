#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPEBMBHIPKD.h"
#include "unitysdk/OIIGJNOAOFO.h"

#define GEMADEMJLEA_EPBDEJLKEKH_OFFSET UNITYSDK_OFFSET(0x179E5320)
#define GEMADEMJLEA__CTOR_OFFSET UNITYSDK_OFFSET(0x179E53B0)

inline static constexpr unsigned int GEMADEMJLEA_TypeDefinitionIndex = 91772;

class GEMADEMJLEA : public ::GPEBMBHIPKD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMADEMJLEA__CTOR_OFFSET))(this);
	}

	::System::Boolean EPBDEJLKEKH(::OIIGJNOAOFO& EGGFIHLJHNO)
	{
		return ((::System::Boolean(*)(::PVOID, ::OIIGJNOAOFO&))((::PBYTE)hIl2Cpp + GEMADEMJLEA_EPBDEJLKEKH_OFFSET))(this, EGGFIHLJHNO);
	}
};
