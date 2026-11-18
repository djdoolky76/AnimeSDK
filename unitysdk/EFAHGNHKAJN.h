#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPEBMBHIPKD.h"
#include "unitysdk/OIIGJNOAOFO.h"

#define EFAHGNHKAJN_EPBDEJLKEKH_OFFSET UNITYSDK_OFFSET(0x17106BE0)
#define EFAHGNHKAJN__CTOR_OFFSET UNITYSDK_OFFSET(0x17106DF0)

inline static constexpr unsigned int EFAHGNHKAJN_TypeDefinitionIndex = 72750;

class EFAHGNHKAJN : public ::GPEBMBHIPKD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAHGNHKAJN__CTOR_OFFSET))(this);
	}

	::System::Boolean EPBDEJLKEKH(::OIIGJNOAOFO& EGGFIHLJHNO)
	{
		return ((::System::Boolean(*)(::PVOID, ::OIIGJNOAOFO&))((::PBYTE)hIl2Cpp + EFAHGNHKAJN_EPBDEJLKEKH_OFFSET))(this, EGGFIHLJHNO);
	}
};
