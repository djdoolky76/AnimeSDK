#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITransitionPanelPopWindowController; }
namespace System { class Action; }

#define EKOMAFPIPMA_FKLEEOJLCKN_DEDNFKIFDLM_OFFSET UNITYSDK_OFFSET(0x17124A00)
#define EKOMAFPIPMA_FKLEEOJLCKN_PBPDDOEMNAM_OFFSET UNITYSDK_OFFSET(0x171249E0)
#define EKOMAFPIPMA_FKLEEOJLCKN__CTOR_OFFSET UNITYSDK_OFFSET(0x171238C0)

inline static constexpr unsigned int EKOMAFPIPMA_FKLEEOJLCKN_TypeDefinitionIndex = 62760;

class EKOMAFPIPMA_FKLEEOJLCKN : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::System::Action* DMPEOJCCCLO; // 0x18
	::MoleMole::UITransitionPanelPopWindowController* OMDJNAPPFFG; // 0x20
	::System::Single DLBFEAOALML; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_FKLEEOJLCKN__CTOR_OFFSET))(this);
	}

	::System::Void PBPDDOEMNAM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_FKLEEOJLCKN_PBPDDOEMNAM_OFFSET))(this);
	}

	::System::Void DEDNFKIFDLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_FKLEEOJLCKN_DEDNFKIFDLM_OFFSET))(this);
	}
};
