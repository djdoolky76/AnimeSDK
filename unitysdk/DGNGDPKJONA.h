#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

#define DGNGDPKJONA_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x1207BD00)
#define DGNGDPKJONA_MPIHFBCKCCD_OFFSET UNITYSDK_OFFSET(0x1207BD50)
#define DGNGDPKJONA_ONSTART_OFFSET UNITYSDK_OFFSET(0x1207BCC0)
#define DGNGDPKJONA__CTOR_OFFSET UNITYSDK_OFFSET(0x1207BD40)

inline static constexpr unsigned int DGNGDPKJONA_TypeDefinitionIndex = 73808;

class DGNGDPKJONA : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNGDPKJONA__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNGDPKJONA_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNGDPKJONA_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void MPIHFBCKCCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNGDPKJONA_MPIHFBCKCCD_OFFSET))(this);
	}
};
