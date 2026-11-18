#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALMODBCIIJC;

#define CKGGAHFEGNB_BGPNBDNOJKA_PDHMGPFFLPE_OFFSET UNITYSDK_OFFSET(0x197144F0)
#define CKGGAHFEGNB_BGPNBDNOJKA__CTOR_OFFSET UNITYSDK_OFFSET(0x197144E0)

inline static constexpr unsigned int CKGGAHFEGNB_BGPNBDNOJKA_TypeDefinitionIndex = 82856;

class CKGGAHFEGNB_BGPNBDNOJKA : public ::System::Object
{
public:
	::System::Int32 EJANOMALBNM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKGGAHFEGNB_BGPNBDNOJKA__CTOR_OFFSET))(this);
	}

	::System::Boolean PDHMGPFFLPE(::ALMODBCIIJC* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::ALMODBCIIJC*))((::PBYTE)hIl2Cpp + CKGGAHFEGNB_BGPNBDNOJKA_PDHMGPFFLPE_OFFSET))(this, PELAJIFDIPN);
	}
};
