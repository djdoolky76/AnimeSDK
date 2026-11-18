#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCJFBAKNDNN.h"
#include "unitysdk/LJIBNLBCGFG.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

namespace System { class String; }

#define PMFMNECIGAA_PNACLPLEBFN_HCCOEBHPAFP_OFFSET UNITYSDK_OFFSET(0x1C664500)
#define PMFMNECIGAA_PNACLPLEBFN_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x1C6644B0)
#define PMFMNECIGAA_PNACLPLEBFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6644A0)

inline static constexpr unsigned int PMFMNECIGAA_PNACLPLEBFN_TypeDefinitionIndex = 85116;

class PMFMNECIGAA_PNACLPLEBFN : public ::HCJFBAKNDNN
{
public:
	::System::String* DCJCHGOGLMF; // 0x28

	::System::Void _ctor(::System::String* MCOHLHMKLIP, ::MoleMole::HollowChessboard::HollowChessboardUID COBEJJHGMPO, ::LJIBNLBCGFG FGLDMHFEJDI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::LJIBNLBCGFG))((::PBYTE)hIl2Cpp + PMFMNECIGAA_PNACLPLEBFN__CTOR_OFFSET))(this, MCOHLHMKLIP, COBEJJHGMPO, FGLDMHFEJDI);
	}

	::System::Void KNDMMHPDPIB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFMNECIGAA_PNACLPLEBFN_KNDMMHPDPIB_OFFSET))(this);
	}

	::System::Void HCCOEBHPAFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFMNECIGAA_PNACLPLEBFN_HCCOEBHPAFP_OFFSET))(this);
	}
};
