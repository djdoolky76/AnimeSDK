#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

class DBNPGEGCJEA;

#define DBNPGEGCJEA_HICIGNCMDAE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x6EE530)
#define DBNPGEGCJEA_HICIGNCMDAE_NCPGJPNICBK_OFFSET UNITYSDK_OFFSET(0x6EE600)
#define DBNPGEGCJEA_HICIGNCMDAE_OOJFFGEGFON_OFFSET UNITYSDK_OFFSET(0x6EE590)

inline static constexpr unsigned int DBNPGEGCJEA_HICIGNCMDAE_TypeDefinitionIndex = 84564;

struct alignas(8) DBNPGEGCJEA_HICIGNCMDAE
{
	// static const ::System::Int32 JFILHEHINGD = -0x1; // 0x0
	::System::Single DPKDDJEJEIA; // 0x10
	::System::Boolean AEBGBPDHAAJ; // 0x14
	::System::Boolean KJJNKBPFDKH; // 0x15
	::System::Byte _padding0[0x2];
	::System::Int32 LNPFKEHKMPG; // 0x18
	::System::Single CJEJAHANMFB; // 0x1C
	::System::Nullable_1<::System::Int32> NPPEFPAKLCC; // 0x20
	::System::Nullable_1<::System::Int32> ICKLGAINJFE; // 0x28

	::System::Void BBOMJDBNHIC(::DBNPGEGCJEA* CPNMJKIPMBA)
	{
		return ((::System::Void(*)(::PVOID, ::DBNPGEGCJEA*))((::PBYTE)hIl2Cpp + DBNPGEGCJEA_HICIGNCMDAE_BBOMJDBNHIC_OFFSET))(this, CPNMJKIPMBA);
	}

	::System::Void OOJFFGEGFON(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DBNPGEGCJEA_HICIGNCMDAE_OOJFFGEGFON_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void NCPGJPNICBK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNPGEGCJEA_HICIGNCMDAE_NCPGJPNICBK_OFFSET))(this);
	}
};
