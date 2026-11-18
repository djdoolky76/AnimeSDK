#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class CNDAGIIFNPF;
class KLEFIJODLCB;

#define KPGDOPBPNAJ_GFNEJOJAMKF_OFFSET UNITYSDK_OFFSET(0x8D3FA0)
#define KPGDOPBPNAJ_PPIOMFIGKJD_OFFSET UNITYSDK_OFFSET(0x8D3F90)

inline static constexpr unsigned int KPGDOPBPNAJ_TypeDefinitionIndex = 93696;

struct alignas(8) KPGDOPBPNAJ
{
	::CNDAGIIFNPF* EFDJIDLKLBP; // 0x10
	::KLEFIJODLCB* PLEJEGJIICE; // 0x18

	::System::Boolean PPIOMFIGKJD(::System::Int32 DOOMDDPAFJG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KPGDOPBPNAJ_PPIOMFIGKJD_OFFSET))(this, DOOMDDPAFJG);
	}

	::System::Void GFNEJOJAMKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGDOPBPNAJ_GFNEJOJAMKF_OFFSET))(this);
	}
};
