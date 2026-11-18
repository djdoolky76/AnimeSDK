#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPEBMBHIPKD.h"
#include "unitysdk/OIIGJNOAOFO.h"

#define KMHPLPKALPO_EPBDEJLKEKH_OFFSET UNITYSDK_OFFSET(0x1516BC40)
#define KMHPLPKALPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1516BCD0)

inline static constexpr unsigned int KMHPLPKALPO_TypeDefinitionIndex = 66493;

class KMHPLPKALPO : public ::GPEBMBHIPKD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHPLPKALPO__CTOR_OFFSET))(this);
	}

	::System::Boolean EPBDEJLKEKH(::OIIGJNOAOFO& EGGFIHLJHNO)
	{
		return ((::System::Boolean(*)(::PVOID, ::OIIGJNOAOFO&))((::PBYTE)hIl2Cpp + KMHPLPKALPO_EPBDEJLKEKH_OFFSET))(this, EGGFIHLJHNO);
	}
};
