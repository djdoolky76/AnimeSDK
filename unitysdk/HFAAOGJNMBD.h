#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPEBMBHIPKD.h"
#include "unitysdk/OIIGJNOAOFO.h"

#define HFAAOGJNMBD_EPBDEJLKEKH_OFFSET UNITYSDK_OFFSET(0x19E0B050)
#define HFAAOGJNMBD__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0B150)

inline static constexpr unsigned int HFAAOGJNMBD_TypeDefinitionIndex = 54873;

class HFAAOGJNMBD : public ::GPEBMBHIPKD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFAAOGJNMBD__CTOR_OFFSET))(this);
	}

	::System::Boolean EPBDEJLKEKH(::OIIGJNOAOFO& EGGFIHLJHNO)
	{
		return ((::System::Boolean(*)(::PVOID, ::OIIGJNOAOFO&))((::PBYTE)hIl2Cpp + HFAAOGJNMBD_EPBDEJLKEKH_OFFSET))(this, EGGFIHLJHNO);
	}
};
