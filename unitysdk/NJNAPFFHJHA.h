#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPEBMBHIPKD.h"
#include "unitysdk/OIIGJNOAOFO.h"

#define NJNAPFFHJHA_EPBDEJLKEKH_OFFSET UNITYSDK_OFFSET(0x10D7C8A0)
#define NJNAPFFHJHA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D7C930)

inline static constexpr unsigned int NJNAPFFHJHA_TypeDefinitionIndex = 54356;

class NJNAPFFHJHA : public ::GPEBMBHIPKD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNAPFFHJHA__CTOR_OFFSET))(this);
	}

	::System::Boolean EPBDEJLKEKH(::OIIGJNOAOFO& EGGFIHLJHNO)
	{
		return ((::System::Boolean(*)(::PVOID, ::OIIGJNOAOFO&))((::PBYTE)hIl2Cpp + NJNAPFFHJHA_EPBDEJLKEKH_OFFSET))(this, EGGFIHLJHNO);
	}
};
