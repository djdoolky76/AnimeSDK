#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IODPOEFKGOI.h"
#include "unitysdk/JMDDDDPLMON.h"

#define POIOPBEFMNK_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x81CED0)
#define POIOPBEFMNK_POMOALFPFEA_OFFSET UNITYSDK_OFFSET(0x81CF40)

inline static constexpr unsigned int POIOPBEFMNK_TypeDefinitionIndex = 62159;

struct alignas(4) POIOPBEFMNK
{
	::System::Void IAFHBCHLBME(::JMDDDDPLMON& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JMDDDDPLMON&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + POIOPBEFMNK_IAFHBCHLBME_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}

	::System::Void POMOALFPFEA(::JMDDDDPLMON& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JMDDDDPLMON&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + POIOPBEFMNK_POMOALFPFEA_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}
};
