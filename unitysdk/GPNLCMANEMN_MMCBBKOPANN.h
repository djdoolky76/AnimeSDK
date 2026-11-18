#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EBNNGMLLPII.h"

class CBHHNCAJBJL;
class GPNLCMANEMN_FJKPBCBGAGF;

#define GPNLCMANEMN_MMCBBKOPANN_MDMCJBMPGJJ_OFFSET UNITYSDK_OFFSET(0x17ADECA0)
#define GPNLCMANEMN_MMCBBKOPANN__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADEC90)

inline static constexpr unsigned int GPNLCMANEMN_MMCBBKOPANN_TypeDefinitionIndex = 39839;

class GPNLCMANEMN_MMCBBKOPANN : public ::System::Object
{
public:
	::GPNLCMANEMN_FJKPBCBGAGF* FGBNBFHOKAA; // 0x10
	::CBHHNCAJBJL* LJBPECKCCEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNLCMANEMN_MMCBBKOPANN__CTOR_OFFSET))(this);
	}

	::System::Void MDMCJBMPGJJ(::EBNNGMLLPII IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::EBNNGMLLPII))((::PBYTE)hIl2Cpp + GPNLCMANEMN_MMCBBKOPANN_MDMCJBMPGJJ_OFFSET))(this, IGAAKDOIPNN);
	}
};
