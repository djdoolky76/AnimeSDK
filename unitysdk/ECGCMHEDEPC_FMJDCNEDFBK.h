#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelMonsterPortableHudBaseChildWindowController; }

#define ECGCMHEDEPC_FMJDCNEDFBK_EGPMLIOHFLH_OFFSET UNITYSDK_OFFSET(0xFDD5060)
#define ECGCMHEDEPC_FMJDCNEDFBK__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD5050)

inline static constexpr unsigned int ECGCMHEDEPC_FMJDCNEDFBK_TypeDefinitionIndex = 55285;

class ECGCMHEDEPC_FMJDCNEDFBK : public ::System::Object
{
public:
	::MGHNAPKHBOG BKNMILFHOID; // 0x10
	::System::Boolean KDGPPOFDHDH; // 0x28
	::System::Boolean DOOEKMBAAMO; // 0x29
	::System::Boolean BLCFNNKPNMC; // 0x2A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FMJDCNEDFBK__CTOR_OFFSET))(this);
	}

	::System::Void EGPMLIOHFLH(::System::UInt32 PIIPCLCCOIG, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* OFDKNLCFCPL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FMJDCNEDFBK_EGPMLIOHFLH_OFFSET))(this, PIIPCLCCOIG, OFDKNLCFCPL);
	}
};
