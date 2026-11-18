#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KJDAIKKIJCI;
namespace MoleMole { class UIHollowCardOptionsDialogContext; }

#define KJDAIKKIJCI_ADFOPAAOBLD_DNGLGEHPFGF_OFFSET UNITYSDK_OFFSET(0x152137D0)
#define KJDAIKKIJCI_ADFOPAAOBLD__CTOR_OFFSET UNITYSDK_OFFSET(0x152137C0)

inline static constexpr unsigned int KJDAIKKIJCI_ADFOPAAOBLD_TypeDefinitionIndex = 85206;

class KJDAIKKIJCI_ADFOPAAOBLD : public ::System::Object
{
public:
	::KJDAIKKIJCI* KLHPEBKNIFB; // 0x10
	::MoleMole::UIHollowCardOptionsDialogContext* AAOCANGHBDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDAIKKIJCI_ADFOPAAOBLD__CTOR_OFFSET))(this);
	}

	::System::Void DNGLGEHPFGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDAIKKIJCI_ADFOPAAOBLD_DNGLGEHPFGF_OFFSET))(this);
	}
};
