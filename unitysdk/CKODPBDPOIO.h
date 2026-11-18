#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILMFMBEMMFG.h"
#include "unitysdk/AKKCAHCPGME.h"

#define CKODPBDPOIO_CEDEGBLHDCD_OFFSET UNITYSDK_OFFSET(0x1F544AE0)
#define CKODPBDPOIO_GIEFKLLIDPN_OFFSET UNITYSDK_OFFSET(0x1F544870)
#define CKODPBDPOIO_OCGMNMEMGCJ_OFFSET UNITYSDK_OFFSET(0x1F544E70)
#define CKODPBDPOIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F544E60)

inline static constexpr unsigned int CKODPBDPOIO_TypeDefinitionIndex = 28669;

class CKODPBDPOIO : public ::ILMFMBEMMFG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODPBDPOIO__CTOR_OFFSET))(this);
	}

	::System::Boolean GIEFKLLIDPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKODPBDPOIO_GIEFKLLIDPN_OFFSET))(this);
	}

	::System::Boolean CEDEGBLHDCD(::AKKCAHCPGME& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKKCAHCPGME&))((::PBYTE)hIl2Cpp + CKODPBDPOIO_CEDEGBLHDCD_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Boolean OCGMNMEMGCJ(::AKKCAHCPGME& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKKCAHCPGME&))((::PBYTE)hIl2Cpp + CKODPBDPOIO_OCGMNMEMGCJ_OFFSET))(this, MIALFKCCCPI);
	}
};
