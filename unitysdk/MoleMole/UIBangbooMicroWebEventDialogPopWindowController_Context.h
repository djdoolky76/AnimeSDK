#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FNPHOJBKNKB;

#define MOLEMOLE_UIBANGBOOMICROWEBEVENTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19186D90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebEventDialogPopWindowController_Context_TypeDefinitionIndex = 70857;

	class UIBangbooMicroWebEventDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FNPHOJBKNKB* EventConfig; // 0x28
		::System::Boolean IsOpenByGetEvent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBEVENTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
