#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class LDBMFLMDPGJ;

#define MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D23CE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebPictureBookInfoDialogPopWindowController_Context_TypeDefinitionIndex = 71284;

	class UIBangbooMicroWebPictureBookInfoDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::LDBMFLMDPGJ* RowData; // 0x28
		::System::Boolean IsShowByGetPictureBook; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
