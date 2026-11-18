#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GFNLALEHIHE;

#define MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x176CBA20)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonBranchBaseController_Context_TypeDefinitionIndex = 92862;

	class UIInLevelSkillButtonBranchBaseController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::GFNLALEHIHE* Container; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONBRANCHBASECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
