#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GCDMLDNBPMN;

#define MOLEMOLE_UIRABDEPOSITORYSKILLDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF3C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositorySkillDescWidgetController_Context_TypeDefinitionIndex = 38493;

	class UIRABDepositorySkillDescWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::GCDMLDNBPMN* SkillData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYSKILLDESCWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
