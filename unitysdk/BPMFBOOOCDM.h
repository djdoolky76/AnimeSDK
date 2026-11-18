#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPEBMBHIPKD.h"
#include "unitysdk/OIIGJNOAOFO.h"

#define BPMFBOOOCDM_EPBDEJLKEKH_OFFSET UNITYSDK_OFFSET(0x1398B7A0)
#define BPMFBOOOCDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1398B980)

inline static constexpr unsigned int BPMFBOOOCDM_TypeDefinitionIndex = 78549;

class BPMFBOOOCDM : public ::GPEBMBHIPKD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMFBOOOCDM__CTOR_OFFSET))(this);
	}

	::System::Boolean EPBDEJLKEKH(::OIIGJNOAOFO& EGGFIHLJHNO)
	{
		return ((::System::Boolean(*)(::PVOID, ::OIIGJNOAOFO&))((::PBYTE)hIl2Cpp + BPMFBOOOCDM_EPBDEJLKEKH_OFFSET))(this, EGGFIHLJHNO);
	}
};
