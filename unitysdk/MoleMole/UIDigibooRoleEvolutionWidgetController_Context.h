#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIDIGIBOOROLEEVOLUTIONWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1807D000)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooRoleEvolutionWidgetController_Context_TypeDefinitionIndex = 44128;

	class UIDigibooRoleEvolutionWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClose; // 0x28
		::System::Int32 HandbookID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOROLEEVOLUTIONWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
