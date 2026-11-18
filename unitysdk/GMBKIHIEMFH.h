#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILMFMBEMMFG.h"
#include "unitysdk/AKKCAHCPGME.h"

#define GMBKIHIEMFH_CEDEGBLHDCD_OFFSET UNITYSDK_OFFSET(0x1CD94840)
#define GMBKIHIEMFH_GIEFKLLIDPN_OFFSET UNITYSDK_OFFSET(0x1CD945E0)
#define GMBKIHIEMFH_OCGMNMEMGCJ_OFFSET UNITYSDK_OFFSET(0x1CD94ED0)
#define GMBKIHIEMFH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD94EC0)

inline static constexpr unsigned int GMBKIHIEMFH_TypeDefinitionIndex = 28929;

class GMBKIHIEMFH : public ::ILMFMBEMMFG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBKIHIEMFH__CTOR_OFFSET))(this);
	}

	::System::Boolean GIEFKLLIDPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBKIHIEMFH_GIEFKLLIDPN_OFFSET))(this);
	}

	::System::Boolean CEDEGBLHDCD(::AKKCAHCPGME& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKKCAHCPGME&))((::PBYTE)hIl2Cpp + GMBKIHIEMFH_CEDEGBLHDCD_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Boolean OCGMNMEMGCJ(::AKKCAHCPGME& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKKCAHCPGME&))((::PBYTE)hIl2Cpp + GMBKIHIEMFH_OCGMNMEMGCJ_OFFSET))(this, MIALFKCCCPI);
	}
};
