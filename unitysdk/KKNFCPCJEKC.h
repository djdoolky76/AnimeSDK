#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEKAKLCDJCJ.h"
#include "unitysdk/IGKOFMFKNNO.h"

#define KKNFCPCJEKC_FHIBGHMCNLP_OFFSET UNITYSDK_OFFSET(0x17720820)
#define KKNFCPCJEKC_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x177207B0)
#define KKNFCPCJEKC_OABCIHPBHLK_OFFSET UNITYSDK_OFFSET(0x17720830)
#define KKNFCPCJEKC__CTOR_OFFSET UNITYSDK_OFFSET(0x177207A0)

inline static constexpr unsigned int KKNFCPCJEKC_TypeDefinitionIndex = 70217;

class KKNFCPCJEKC : public ::IGKOFMFKNNO
{
public:
	::HEKAKLCDJCJ _BPJLNDPECJO_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNFCPCJEKC__CTOR_OFFSET))(this);
	}

	static ::KKNFCPCJEKC* JFDOOELFAOA()
	{
		return ((::KKNFCPCJEKC*(*)())((::PBYTE)hIl2Cpp + KKNFCPCJEKC_JFDOOELFAOA_OFFSET))();
	}

	::System::Void FHIBGHMCNLP(::HEKAKLCDJCJ EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HEKAKLCDJCJ))((::PBYTE)hIl2Cpp + KKNFCPCJEKC_FHIBGHMCNLP_OFFSET))(this, EGEGIMGMJHN);
	}

	::HEKAKLCDJCJ OABCIHPBHLK()
	{
		return ((::HEKAKLCDJCJ(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNFCPCJEKC_OABCIHPBHLK_OFFSET))(this);
	}
};
