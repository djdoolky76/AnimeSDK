#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IODPOEFKGOI.h"
#include "unitysdk/NMGPMHEPKGE.h"

#define ADJGBEICMHG_EADCPNBOEHL_OFFSET UNITYSDK_OFFSET(0x785790)
#define ADJGBEICMHG_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x785720)

inline static constexpr unsigned int ADJGBEICMHG_TypeDefinitionIndex = 52837;

struct alignas(4) ADJGBEICMHG
{
	::System::Void IAFHBCHLBME(::NMGPMHEPKGE& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::NMGPMHEPKGE&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + ADJGBEICMHG_IAFHBCHLBME_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}

	::System::Void EADCPNBOEHL(::NMGPMHEPKGE& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::NMGPMHEPKGE&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + ADJGBEICMHG_EADCPNBOEHL_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}
};
