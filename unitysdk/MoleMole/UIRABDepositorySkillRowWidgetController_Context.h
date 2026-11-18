#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GCDMLDNBPMN;

#define MOLEMOLE_UIRABDEPOSITORYSKILLROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1799C640)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositorySkillRowWidgetController_Context_TypeDefinitionIndex = 45743;

	class UIRABDepositorySkillRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::GCDMLDNBPMN* SkillData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYSKILLROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
