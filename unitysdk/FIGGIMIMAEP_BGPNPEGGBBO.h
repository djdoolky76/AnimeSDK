#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define FIGGIMIMAEP_BGPNPEGGBBO_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x191C5370)
#define FIGGIMIMAEP_BGPNPEGGBBO_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x191C5220)
#define FIGGIMIMAEP_BGPNPEGGBBO__CTOR_OFFSET UNITYSDK_OFFSET(0x191C5210)

inline static constexpr unsigned int FIGGIMIMAEP_BGPNPEGGBBO_TypeDefinitionIndex = 65986;

class FIGGIMIMAEP_BGPNPEGGBBO : public ::System::Object
{
public:
	::HOCDHMEPPEG HGBOMLCCBEE; // 0x10
	::HOCDHMEPPEG BIMLFPNFDED; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIGGIMIMAEP_BGPNPEGGBBO__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::Int32 GNOHOICKMBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIGGIMIMAEP_BGPNPEGGBBO_LIDNPLMPHAL_OFFSET))(this, GNOHOICKMBI);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIGGIMIMAEP_BGPNPEGGBBO_AAHMACBDCPN_OFFSET))(this);
	}
};
