#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/EvtDestructionSwitchType.h"

#define LNMPBIOBNIP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x156790D0)
#define LNMPBIOBNIP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15679040)
#define LNMPBIOBNIP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15678FB0)
#define LNMPBIOBNIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x15678F30)
#define LNMPBIOBNIP__CTOR_OFFSET UNITYSDK_OFFSET(0x15678FA0)

inline static constexpr unsigned int LNMPBIOBNIP_TypeDefinitionIndex = 56565;

class LNMPBIOBNIP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x49; // 0x0
	::MoleMole::EvtDestructionSwitchType FGDPOAFBDID; // 0x20
	::System::UInt32 AOGNNJLKHGL; // 0x24
	::System::Int32 ABHBKFJKINO; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNMPBIOBNIP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMPBIOBNIP__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMPBIOBNIP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMPBIOBNIP_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 NJNCGJLHLKC, ::MoleMole::EvtDestructionSwitchType FGDPOAFBDID, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::EvtDestructionSwitchType, ::System::Int32))((::PBYTE)hIl2Cpp + LNMPBIOBNIP_CNHBDOMKKDE_OFFSET))(this, NJNCGJLHLKC, FGDPOAFBDID, ABHBKFJKINO);
	}
};
