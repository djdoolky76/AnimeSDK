#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class AOIMINJPFHO;
class DIHNHHLDLDP;

#define FGAMDDFOKGE_GFNEJOJAMKF_OFFSET UNITYSDK_OFFSET(0x968730)
#define FGAMDDFOKGE_PPIOMFIGKJD_OFFSET UNITYSDK_OFFSET(0x9686D0)

inline static constexpr unsigned int FGAMDDFOKGE_TypeDefinitionIndex = 28778;

struct alignas(8) FGAMDDFOKGE
{
	::AOIMINJPFHO* HBHNPKPPKFE; // 0x10
	::System::Int32 DOHHMABDGPE; // 0x18
	::System::Byte _padding0[0x4];
	::DIHNHHLDLDP* DGDENJKAJDB; // 0x20

	::System::Boolean PPIOMFIGKJD(::System::Int32 DOOMDDPAFJG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FGAMDDFOKGE_PPIOMFIGKJD_OFFSET))(this, DOOMDDPAFJG);
	}

	::System::Void GFNEJOJAMKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAMDDFOKGE_GFNEJOJAMKF_OFFSET))(this);
	}
};
