#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCNNDGBMNAK.h"
#include "unitysdk/KEHIKMMFFHH.h"
#include "unitysdk/System/ValueType.h"

class OCIKBEJKPCB;

#define EGDEBLNKPOB_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x76C400)
#define EGDEBLNKPOB__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int EGDEBLNKPOB_TypeDefinitionIndex = 46683;

struct alignas(4) EGDEBLNKPOB
{
	::KEHIKMMFFHH DAONPILMAPI; // 0x10
	::FCNNDGBMNAK FHMMCFCNFBD; // 0x14

	::System::Void _ctor(::KEHIKMMFFHH CKNLPIHAFLM, ::FCNNDGBMNAK FMLKMLCKIPM)
	{
		return ((::System::Void(*)(::PVOID, ::KEHIKMMFFHH, ::FCNNDGBMNAK))((::PBYTE)hIl2Cpp + EGDEBLNKPOB__CTOR_OFFSET))(this, CKNLPIHAFLM, FMLKMLCKIPM);
	}

	::System::Void JLIMOLHLFAK(::OCIKBEJKPCB* DICPEDGFHBH)
	{
		return ((::System::Void(*)(::PVOID, ::OCIKBEJKPCB*))((::PBYTE)hIl2Cpp + EGDEBLNKPOB_JLIMOLHLFAK_OFFSET))(this, DICPEDGFHBH);
	}
};
