#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPEBMBHIPKD.h"
#include "unitysdk/OIIGJNOAOFO.h"

#define LKIJJILOMIO_EPBDEJLKEKH_OFFSET UNITYSDK_OFFSET(0x168553D0)
#define LKIJJILOMIO__CTOR_OFFSET UNITYSDK_OFFSET(0x168555B0)

inline static constexpr unsigned int LKIJJILOMIO_TypeDefinitionIndex = 48982;

class LKIJJILOMIO : public ::GPEBMBHIPKD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIJJILOMIO__CTOR_OFFSET))(this);
	}

	::System::Boolean EPBDEJLKEKH(::OIIGJNOAOFO& EGGFIHLJHNO)
	{
		return ((::System::Boolean(*)(::PVOID, ::OIIGJNOAOFO&))((::PBYTE)hIl2Cpp + LKIJJILOMIO_EPBDEJLKEKH_OFFSET))(this, EGGFIHLJHNO);
	}
};
