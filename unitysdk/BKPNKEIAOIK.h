#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILMFMBEMMFG.h"
#include "unitysdk/AKKCAHCPGME.h"

#define BKPNKEIAOIK_CEDEGBLHDCD_OFFSET UNITYSDK_OFFSET(0x1F431890)
#define BKPNKEIAOIK_GIEFKLLIDPN_OFFSET UNITYSDK_OFFSET(0x1F431680)
#define BKPNKEIAOIK_OCGMNMEMGCJ_OFFSET UNITYSDK_OFFSET(0x1F431D20)
#define BKPNKEIAOIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F431D00)

inline static constexpr unsigned int BKPNKEIAOIK_TypeDefinitionIndex = 28711;

class BKPNKEIAOIK : public ::ILMFMBEMMFG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPNKEIAOIK__CTOR_OFFSET))(this);
	}

	::System::Boolean GIEFKLLIDPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPNKEIAOIK_GIEFKLLIDPN_OFFSET))(this);
	}

	::System::Boolean CEDEGBLHDCD(::AKKCAHCPGME& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKKCAHCPGME&))((::PBYTE)hIl2Cpp + BKPNKEIAOIK_CEDEGBLHDCD_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Boolean OCGMNMEMGCJ(::AKKCAHCPGME& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AKKCAHCPGME&))((::PBYTE)hIl2Cpp + BKPNKEIAOIK_OCGMNMEMGCJ_OFFSET))(this, MIALFKCCCPI);
	}
};
