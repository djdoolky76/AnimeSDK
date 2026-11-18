#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define HCCIPCBLPOH_PNAJEHNPEJD_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x149F9E40)
#define HCCIPCBLPOH_PNAJEHNPEJD_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x149F9EE0)
#define HCCIPCBLPOH_PNAJEHNPEJD__CTOR_OFFSET UNITYSDK_OFFSET(0x149F9E30)

inline static constexpr unsigned int HCCIPCBLPOH_PNAJEHNPEJD_TypeDefinitionIndex = 77923;

class HCCIPCBLPOH_PNAJEHNPEJD : public ::System::Object
{
public:
	::HOCDHMEPPEG ONNFJMLMJIJ; // 0x10
	::HOCDHMEPPEG PGKONBMAOPC; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCIPCBLPOH_PNAJEHNPEJD__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCIPCBLPOH_PNAJEHNPEJD_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCIPCBLPOH_PNAJEHNPEJD_LIDNPLMPHAL_OFFSET))(this);
	}
};
