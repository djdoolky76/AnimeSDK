#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define DHFBHFGIOFC_FDBECHOMLDM_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x1329C470)
#define DHFBHFGIOFC_FDBECHOMLDM_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1329C320)
#define DHFBHFGIOFC_FDBECHOMLDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1329C310)

inline static constexpr unsigned int DHFBHFGIOFC_FDBECHOMLDM_TypeDefinitionIndex = 39762;

class DHFBHFGIOFC_FDBECHOMLDM : public ::System::Object
{
public:
	::HOCDHMEPPEG BIMLFPNFDED; // 0x10
	::HOCDHMEPPEG HGBOMLCCBEE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFBHFGIOFC_FDBECHOMLDM__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::Int32 GNOHOICKMBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHFBHFGIOFC_FDBECHOMLDM_LIDNPLMPHAL_OFFSET))(this, GNOHOICKMBI);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFBHFGIOFC_FDBECHOMLDM_AAHMACBDCPN_OFFSET))(this);
	}
};
