#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GJPKABLIAPN.h"
#include "unitysdk/IODPOEFKGOI.h"

#define JOILAFHKAPC_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x771A00)
#define JOILAFHKAPC_MMLLPFDFMAM_OFFSET UNITYSDK_OFFSET(0x771A80)

inline static constexpr unsigned int JOILAFHKAPC_TypeDefinitionIndex = 47522;

struct alignas(4) JOILAFHKAPC
{
	::System::Void IAFHBCHLBME(::GJPKABLIAPN& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::GJPKABLIAPN&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + JOILAFHKAPC_IAFHBCHLBME_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}

	::System::Void MMLLPFDFMAM(::GJPKABLIAPN& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::GJPKABLIAPN&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + JOILAFHKAPC_MMLLPFDFMAM_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}
};
