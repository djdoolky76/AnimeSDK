#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FMHDMLBDIJC;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVSINGLEITEMSALETIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C135E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSingleItemSaleTipsDialogPopWindowController_Context_TypeDefinitionIndex = 57447;

	class UIZenkovSingleItemSaleTipsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FMHDMLBDIJC* ItemKovBagIndex; // 0x28
		::System::Action_1<::FMHDMLBDIJC*>* OnOkAction; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSINGLEITEMSALETIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
