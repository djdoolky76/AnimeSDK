#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITransitionPanelPopWindowController; }
namespace System { class Action; }

#define GPPMPHICDEA_HGFEAEFLBLH_EBMHLNJAPMD_OFFSET UNITYSDK_OFFSET(0x15D91A10)
#define GPPMPHICDEA_HGFEAEFLBLH_HPGDAKDEFKA_OFFSET UNITYSDK_OFFSET(0x15D91B80)
#define GPPMPHICDEA_HGFEAEFLBLH__CTOR_OFFSET UNITYSDK_OFFSET(0x15D91A00)

inline static constexpr unsigned int GPPMPHICDEA_HGFEAEFLBLH_TypeDefinitionIndex = 42669;

class GPPMPHICDEA_HGFEAEFLBLH : public ::System::Object
{
public:
	::MoleMole::UITransitionPanelPopWindowController* OMDJNAPPFFG; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::System::Int32 CGMEOMGAKDN; // 0x20
	::System::UInt32 PKMFBJMJCOO; // 0x24
	::System::Boolean GFFINNGEMLL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HGFEAEFLBLH__CTOR_OFFSET))(this);
	}

	::System::Void EBMHLNJAPMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HGFEAEFLBLH_EBMHLNJAPMD_OFFSET))(this);
	}

	::System::Void HPGDAKDEFKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HGFEAEFLBLH_HPGDAKDEFKA_OFFSET))(this);
	}
};
