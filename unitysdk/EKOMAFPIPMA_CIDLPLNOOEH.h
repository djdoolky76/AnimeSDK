#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITransitionPanelPopWindowController; }
namespace System { class Action; }

#define EKOMAFPIPMA_CIDLPLNOOEH_LNEPAFKKHPI_OFFSET UNITYSDK_OFFSET(0x1354F430)
#define EKOMAFPIPMA_CIDLPLNOOEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1354F420)

inline static constexpr unsigned int EKOMAFPIPMA_CIDLPLNOOEH_TypeDefinitionIndex = 62754;

class EKOMAFPIPMA_CIDLPLNOOEH : public ::System::Object
{
public:
	::MoleMole::UITransitionPanelPopWindowController* OMDJNAPPFFG; // 0x10
	::System::Action* DMPEOJCCCLO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_CIDLPLNOOEH__CTOR_OFFSET))(this);
	}

	::System::Void LNEPAFKKHPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_CIDLPLNOOEH_LNEPAFKKHPI_OFFSET))(this);
	}
};
