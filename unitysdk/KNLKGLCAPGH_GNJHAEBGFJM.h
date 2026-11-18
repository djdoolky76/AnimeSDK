#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNLKGLCAPGH_AAGINHBONOG;
namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define KNLKGLCAPGH_GNJHAEBGFJM_JONFHJAPLFJ_OFFSET UNITYSDK_OFFSET(0x126A9820)
#define KNLKGLCAPGH_GNJHAEBGFJM__CTOR_OFFSET UNITYSDK_OFFSET(0x126A9810)

inline static constexpr unsigned int KNLKGLCAPGH_GNJHAEBGFJM_TypeDefinitionIndex = 41102;

class KNLKGLCAPGH_GNJHAEBGFJM : public ::System::Object
{
public:
	::KNLKGLCAPGH_AAGINHBONOG* FGBNBFHOKAA; // 0x10
	::MoleMole::UIGeneralTipsPopWindowController* JOLDOMEIKEF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_GNJHAEBGFJM__CTOR_OFFSET))(this);
	}

	::System::Void JONFHJAPLFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_GNJHAEBGFJM_JONFHJAPLFJ_OFFSET))(this);
	}
};
