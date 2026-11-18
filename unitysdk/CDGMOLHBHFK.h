#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILMFMBEMMFG.h"
#include "unitysdk/AKKCAHCPGME.h"

#define CDGMOLHBHFK_CEDEGBLHDCD_OFFSET UNITYSDK_OFFSET(0x1F432010)
#define CDGMOLHBHFK_GIEFKLLIDPN_OFFSET UNITYSDK_OFFSET(0x1F431DE0)
#define CDGMOLHBHFK_OCGMNMEMGCJ_OFFSET UNITYSDK_OFFSET(0x1F432350)
#define CDGMOLHBHFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F432340)

inline static constexpr unsigned int CDGMOLHBHFK_TypeDefinitionIndex = 28954;

class CDGMOLHBHFK : public ::ILMFMBEMMFG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDGMOLHBHFK__CTOR_OFFSET))(this);
	}

	::System::Boolean GIEFKLLIDPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDGMOLHBHFK_GIEFKLLIDPN_OFFSET))(this);
	}

	::System::Boolean CEDEGBLHDCD(::AKKCAHCPGME& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKKCAHCPGME&))((::PBYTE)hIl2Cpp + CDGMOLHBHFK_CEDEGBLHDCD_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Boolean OCGMNMEMGCJ(::AKKCAHCPGME& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKKCAHCPGME&))((::PBYTE)hIl2Cpp + CDGMOLHBHFK_OCGMNMEMGCJ_OFFSET))(this, MIALFKCCCPI);
	}
};
