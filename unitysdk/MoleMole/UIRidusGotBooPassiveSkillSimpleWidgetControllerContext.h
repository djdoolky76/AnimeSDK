#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FJIFILPGMCF;

#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSIMPLEWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D824B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPassiveSkillSimpleWidgetControllerContext_TypeDefinitionIndex = 46282;

	class UIRidusGotBooPassiveSkillSimpleWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FJIFILPGMCF* template_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSIMPLEWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
