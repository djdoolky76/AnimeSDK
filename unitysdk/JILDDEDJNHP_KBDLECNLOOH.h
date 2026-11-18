#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JILDDEDJNHP;
namespace MoleMole { class UIHollowCardOptionsDialogContext; }

#define JILDDEDJNHP_KBDLECNLOOH_MAJBPLOENJM_OFFSET UNITYSDK_OFFSET(0x1A477E30)
#define JILDDEDJNHP_KBDLECNLOOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A477E20)

inline static constexpr unsigned int JILDDEDJNHP_KBDLECNLOOH_TypeDefinitionIndex = 43188;

class JILDDEDJNHP_KBDLECNLOOH : public ::System::Object
{
public:
	::JILDDEDJNHP* KLHPEBKNIFB; // 0x10
	::MoleMole::UIHollowCardOptionsDialogContext* AAOCANGHBDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILDDEDJNHP_KBDLECNLOOH__CTOR_OFFSET))(this);
	}

	::System::Void MAJBPLOENJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILDDEDJNHP_KBDLECNLOOH_MAJBPLOENJM_OFFSET))(this);
	}
};
