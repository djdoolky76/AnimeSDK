#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJIBNLBCGFG.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/OBKCIJLJCBN.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DOEADLKIMBH_ALCEKAJENAO_OFFSET UNITYSDK_OFFSET(0x1209C060)
#define DOEADLKIMBH_BNJHEKFGHLD_OFFSET UNITYSDK_OFFSET(0x1209C0B0)
#define DOEADLKIMBH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1209BFB0)
#define DOEADLKIMBH_HELHLBMJCNH_OFFSET UNITYSDK_OFFSET(0x1209BFF0)
#define DOEADLKIMBH_HEMOHDFDKEG_OFFSET UNITYSDK_OFFSET(0x1209C040)
#define DOEADLKIMBH_JLJDLPELENE_OFFSET UNITYSDK_OFFSET(0x1209C050)
#define DOEADLKIMBH_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x120815B0)
#define DOEADLKIMBH__CTOR_OFFSET UNITYSDK_OFFSET(0x1209C030)

inline static constexpr unsigned int DOEADLKIMBH_TypeDefinitionIndex = 38302;

class DOEADLKIMBH : public ::System::Object
{
public:
	::System::Action* BBPDGAJIBKC; // 0x10
	::LJIBNLBCGFG FEMINEOIIHK; // 0x18
	::MoleMole::HollowChessboard::HollowChessboardUID LKDJGGNEEAL; // 0x20
	::OBKCIJLJCBN _EEFGOAJIPNI_k__BackingField; // 0x28
	::System::Boolean OFLAMIBCAAL; // 0x2C
	::System::Boolean EAACJCAOOGH; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEADLKIMBH__CTOR_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEADLKIMBH_ELMEFBBHCEG_OFFSET))(this);
	}

	::System::Void HELHLBMJCNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEADLKIMBH_HELHLBMJCNH_OFFSET))(this);
	}

	::System::Void OMMICIJCCKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEADLKIMBH_OMMICIJCCKB_OFFSET))(this);
	}

	::OBKCIJLJCBN HEMOHDFDKEG()
	{
		return ((::OBKCIJLJCBN(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEADLKIMBH_HEMOHDFDKEG_OFFSET))(this);
	}

	::System::Boolean JLJDLPELENE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEADLKIMBH_JLJDLPELENE_OFFSET))(this);
	}

	::System::Void ALCEKAJENAO(::System::Boolean HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DOEADLKIMBH_ALCEKAJENAO_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void BNJHEKFGHLD(::OBKCIJLJCBN EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OBKCIJLJCBN))((::PBYTE)hIl2Cpp + DOEADLKIMBH_BNJHEKFGHLD_OFFSET))(this, EGEGIMGMJHN);
	}
};
