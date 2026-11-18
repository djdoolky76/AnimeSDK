#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNLKGLCAPGH_CBGGFCPICEH;
namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define KNLKGLCAPGH_CILEOAHGAIE_KEJILDIJPHB_OFFSET UNITYSDK_OFFSET(0x1634CFB0)
#define KNLKGLCAPGH_CILEOAHGAIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1634CFA0)

inline static constexpr unsigned int KNLKGLCAPGH_CILEOAHGAIE_TypeDefinitionIndex = 41104;

class KNLKGLCAPGH_CILEOAHGAIE : public ::System::Object
{
public:
	::KNLKGLCAPGH_CBGGFCPICEH* FGBNBFHOKAA; // 0x10
	::MoleMole::UIGeneralTipsPopWindowController* JOLDOMEIKEF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_CILEOAHGAIE__CTOR_OFFSET))(this);
	}

	::System::Void KEJILDIJPHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_CILEOAHGAIE_KEJILDIJPHB_OFFSET))(this);
	}
};
