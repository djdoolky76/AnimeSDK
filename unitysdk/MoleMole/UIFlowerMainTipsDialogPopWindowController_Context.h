#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BOFGHBGLOIH;

#define MOLEMOLE_UIFLOWERMAINTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_FLOWERQUESTDETAILDATA_OFFSET UNITYSDK_OFFSET(0x18930870)
#define MOLEMOLE_UIFLOWERMAINTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_FLOWERQUESTDETAILDATA_OFFSET UNITYSDK_OFFSET(0x18930880)
#define MOLEMOLE_UIFLOWERMAINTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18930890)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTipsDialogPopWindowController_Context_TypeDefinitionIndex = 46659;

	class UIFlowerMainTipsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BOFGHBGLOIH* _FlowerQuestDetailData_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::BOFGHBGLOIH* get_FlowerQuestDetailData()
		{
			return ((::BOFGHBGLOIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_FLOWERQUESTDETAILDATA_OFFSET))(this);
		}

		::System::Void set_FlowerQuestDetailData(::BOFGHBGLOIH* value)
		{
			return ((::System::Void(*)(::PVOID, ::BOFGHBGLOIH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_FLOWERQUESTDETAILDATA_OFFSET))(this, value);
		}
	};
}
