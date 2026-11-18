#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define CHFHGONHFAC_MPHCIKGLGEJ_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x14551270)
#define CHFHGONHFAC_MPHCIKGLGEJ_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x14551120)
#define CHFHGONHFAC_MPHCIKGLGEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14551110)

inline static constexpr unsigned int CHFHGONHFAC_MPHCIKGLGEJ_TypeDefinitionIndex = 58989;

class CHFHGONHFAC_MPHCIKGLGEJ : public ::System::Object
{
public:
	::HOCDHMEPPEG BIMLFPNFDED; // 0x10
	::HOCDHMEPPEG HGBOMLCCBEE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFHGONHFAC_MPHCIKGLGEJ__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::Int32 GNOHOICKMBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHFHGONHFAC_MPHCIKGLGEJ_LIDNPLMPHAL_OFFSET))(this, GNOHOICKMBI);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFHGONHFAC_MPHCIKGLGEJ_AAHMACBDCPN_OFFSET))(this);
	}
};
