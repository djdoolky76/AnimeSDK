#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class AEFKCFCIHDK;
class PHPCCIONDOA;

#define MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x189870C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RelicDetailRowWidgetController_Context_TypeDefinitionIndex = 58971;

	class UIAbyssS2RelicDetailRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::PHPCCIONDOA* RelicData; // 0x28
		::AEFKCFCIHDK* RelicLevelTemplateExt; // 0x30
		::System::Boolean ShowDetail; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
