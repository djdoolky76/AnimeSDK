#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPEBMBHIPKD.h"
#include "unitysdk/OIIGJNOAOFO.h"

#define EBHGAGEAHIB_EPBDEJLKEKH_OFFSET UNITYSDK_OFFSET(0x1588A810)
#define EBHGAGEAHIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1588A8A0)

inline static constexpr unsigned int EBHGAGEAHIB_TypeDefinitionIndex = 92584;

class EBHGAGEAHIB : public ::GPEBMBHIPKD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGAGEAHIB__CTOR_OFFSET))(this);
	}

	::System::Boolean EPBDEJLKEKH(::OIIGJNOAOFO& EGGFIHLJHNO)
	{
		return ((::System::Boolean(*)(::PVOID, ::OIIGJNOAOFO&))((::PBYTE)hIl2Cpp + EBHGAGEAHIB_EPBDEJLKEKH_OFFSET))(this, EGGFIHLJHNO);
	}
};
