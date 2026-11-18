#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelCardOptionsDialogContext; }
namespace MoleMole { class UIInLevelCardOptionsDialogPopWindowController; }
namespace System { class Action; }

#define MEDNBFHMDEA_AFNKMJDPILJ_OFFSET UNITYSDK_OFFSET(0x15E25130)
#define MEDNBFHMDEA_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x15E24EF0)
#define MEDNBFHMDEA_FBKFCLJOOJA_OFFSET UNITYSDK_OFFSET(0x15E25170)
#define MEDNBFHMDEA_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x15E24F80)
#define MEDNBFHMDEA_HLBKHEFJAPH_OFFSET UNITYSDK_OFFSET(0x15E24F40)
#define MEDNBFHMDEA_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x15E24F30)
#define MEDNBFHMDEA_NJIJOCMEKBO_OFFSET UNITYSDK_OFFSET(0x15E250E0)
#define MEDNBFHMDEA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E25120)

inline static constexpr unsigned int MEDNBFHMDEA_TypeDefinitionIndex = 86767;

class MEDNBFHMDEA : public ::System::Object
{
public:
	::MoleMole::UIInLevelCardOptionsDialogPopWindowController* JOLDOMEIKEF; // 0x10
	::MoleMole::UIInLevelCardOptionsDialogContext* AAOCANGHBDG; // 0x18
	::System::Boolean CNFGPELOPNM; // 0x20

	::System::Void _ctor(::MoleMole::UIInLevelCardOptionsDialogContext* HBMGHPEPBNC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelCardOptionsDialogContext*))((::PBYTE)hIl2Cpp + MEDNBFHMDEA__CTOR_OFFSET))(this, HBMGHPEPBNC);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDNBFHMDEA_CHCGMACMJLD_OFFSET))(this);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDNBFHMDEA_JNENFEELMBP_OFFSET))(this);
	}

	::System::Int32 HLBKHEFJAPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDNBFHMDEA_HLBKHEFJAPH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MEDNBFHMDEA_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void NJIJOCMEKBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDNBFHMDEA_NJIJOCMEKBO_OFFSET))(this);
	}

	::System::Void AFNKMJDPILJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDNBFHMDEA_AFNKMJDPILJ_OFFSET))(this);
	}

	::MoleMole::UIInLevelCardOptionsDialogPopWindowController* FBKFCLJOOJA()
	{
		return ((::MoleMole::UIInLevelCardOptionsDialogPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDNBFHMDEA_FBKFCLJOOJA_OFFSET))(this);
	}
};
