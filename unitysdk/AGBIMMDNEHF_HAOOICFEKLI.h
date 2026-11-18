#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define AGBIMMDNEHF_HAOOICFEKLI_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x16D753B0)
#define AGBIMMDNEHF_HAOOICFEKLI_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x16D75310)
#define AGBIMMDNEHF_HAOOICFEKLI__CTOR_OFFSET UNITYSDK_OFFSET(0x16D75300)

inline static constexpr unsigned int AGBIMMDNEHF_HAOOICFEKLI_TypeDefinitionIndex = 85238;

class AGBIMMDNEHF_HAOOICFEKLI : public ::System::Object
{
public:
	::HOCDHMEPPEG JEANJDHCKDO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBIMMDNEHF_HAOOICFEKLI__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBIMMDNEHF_HAOOICFEKLI_LIDNPLMPHAL_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBIMMDNEHF_HAOOICFEKLI_AAHMACBDCPN_OFFSET))(this);
	}
};
