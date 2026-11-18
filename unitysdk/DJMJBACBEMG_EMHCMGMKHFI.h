#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJMCICODFBN_PILBLDPFJIB.h"
#include "unitysdk/System/ValueType.h"

#define DJMJBACBEMG_EMHCMGMKHFI_BBHADAJDFIO_OFFSET UNITYSDK_OFFSET(0x6024F0)

inline static constexpr unsigned int DJMJBACBEMG_EMHCMGMKHFI_TypeDefinitionIndex = 52959;

struct alignas(4) DJMJBACBEMG_EMHCMGMKHFI
{
	::System::Int32 DEIPJONPFNG; // 0x10
	::System::Int32 KPMPBLHPLMI; // 0x14
	::System::Int32 MJGBHAMEOKN; // 0x18

	::System::Int32 BBHADAJDFIO(::CJMCICODFBN_PILBLDPFJIB KPOMCFMHBBC)
	{
		return ((::System::Int32(*)(::PVOID, ::CJMCICODFBN_PILBLDPFJIB))((::PBYTE)hIl2Cpp + DJMJBACBEMG_EMHCMGMKHFI_BBHADAJDFIO_OFFSET))(this, KPOMCFMHBBC);
	}
};
