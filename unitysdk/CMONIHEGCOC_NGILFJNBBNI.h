#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCJFBAKNDNN.h"
#include "unitysdk/LJIBNLBCGFG.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class COBFOEMPKIE;
class KLIGCMBNAJL;

#define CMONIHEGCOC_NGILFJNBBNI_HCCOEBHPAFP_OFFSET UNITYSDK_OFFSET(0x193E91A0)
#define CMONIHEGCOC_NGILFJNBBNI_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x193E8C20)
#define CMONIHEGCOC_NGILFJNBBNI__CTOR_OFFSET UNITYSDK_OFFSET(0x193E86B0)

inline static constexpr unsigned int CMONIHEGCOC_NGILFJNBBNI_TypeDefinitionIndex = 67960;

class CMONIHEGCOC_NGILFJNBBNI : public ::HCJFBAKNDNN
{
public:
	::COBFOEMPKIE* FMPNLKPONGK; // 0x28
	::KLIGCMBNAJL* AHMFPFACACD; // 0x30

	::System::Void _ctor(::KLIGCMBNAJL* DFMKILICPFB, ::MoleMole::HollowChessboard::HollowChessboardUID COBEJJHGMPO, ::LJIBNLBCGFG FGLDMHFEJDI)
	{
		return ((::System::Void(*)(::PVOID, ::KLIGCMBNAJL*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::LJIBNLBCGFG))((::PBYTE)hIl2Cpp + CMONIHEGCOC_NGILFJNBBNI__CTOR_OFFSET))(this, DFMKILICPFB, COBEJJHGMPO, FGLDMHFEJDI);
	}

	::System::Void KNDMMHPDPIB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMONIHEGCOC_NGILFJNBBNI_KNDMMHPDPIB_OFFSET))(this);
	}

	::System::Void HCCOEBHPAFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMONIHEGCOC_NGILFJNBBNI_HCCOEBHPAFP_OFFSET))(this);
	}
};
