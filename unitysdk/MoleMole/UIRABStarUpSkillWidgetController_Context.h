#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CANOPECPHCD;
class GCDMLDNBPMN;

#define MOLEMOLE_UIRABSTARUPSKILLWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16496E40)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStarUpSkillWidgetController_Context_TypeDefinitionIndex = 65893;

	class UIRABStarUpSkillWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::GCDMLDNBPMN* SkillData; // 0x28
		::CANOPECPHCD* FactorData; // 0x30
		::System::Boolean ShowTitle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPSKILLWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
