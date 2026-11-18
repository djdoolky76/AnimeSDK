#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define POIOIDFPAGD_HJPAKNLNFHO_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x150E2F50)
#define POIOIDFPAGD_HJPAKNLNFHO_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x150E2FF0)
#define POIOIDFPAGD_HJPAKNLNFHO__CTOR_OFFSET UNITYSDK_OFFSET(0x150E2F40)

inline static constexpr unsigned int POIOIDFPAGD_HJPAKNLNFHO_TypeDefinitionIndex = 62693;

class POIOIDFPAGD_HJPAKNLNFHO : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10
	::HOCDHMEPPEG HPAAOAGMBIF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIOIDFPAGD_HJPAKNLNFHO__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIOIDFPAGD_HJPAKNLNFHO_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIOIDFPAGD_HJPAKNLNFHO_LIDNPLMPHAL_OFFSET))(this);
	}
};
