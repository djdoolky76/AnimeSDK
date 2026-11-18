#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KDKPDGNDJDN;
namespace MoleMole { class UIHollowCardOptionsDialogContext; }

#define KDKPDGNDJDN_NBEPBLLFPLB_MAJBPLOENJM_OFFSET UNITYSDK_OFFSET(0x130B3C40)
#define KDKPDGNDJDN_NBEPBLLFPLB__CTOR_OFFSET UNITYSDK_OFFSET(0x130B3C30)

inline static constexpr unsigned int KDKPDGNDJDN_NBEPBLLFPLB_TypeDefinitionIndex = 38477;

class KDKPDGNDJDN_NBEPBLLFPLB : public ::System::Object
{
public:
	::KDKPDGNDJDN* KLHPEBKNIFB; // 0x10
	::MoleMole::UIHollowCardOptionsDialogContext* AAOCANGHBDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKPDGNDJDN_NBEPBLLFPLB__CTOR_OFFSET))(this);
	}

	::System::Void MAJBPLOENJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKPDGNDJDN_NBEPBLLFPLB_MAJBPLOENJM_OFFSET))(this);
	}
};
