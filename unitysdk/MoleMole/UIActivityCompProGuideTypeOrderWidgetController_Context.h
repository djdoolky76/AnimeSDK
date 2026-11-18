#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class AKIIBAKCEBN;
class CJIEIHEDMME;

#define MOLEMOLE_UIACTIVITYCOMPPROGUIDETYPEORDERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B8C6F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompProGuideTypeOrderWidgetController_Context_TypeDefinitionIndex = 73322;

	class UIActivityCompProGuideTypeOrderWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::AKIIBAKCEBN* questRuleTemplate; // 0x28
		::CJIEIHEDMME* activity; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPPROGUIDETYPEORDERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
