#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FBHPDPBIGPK;
class JDAPCJLHKIO;

#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_CONTEXT_GET_BRIEFINFO_OFFSET UNITYSDK_OFFSET(0x191A6DA0)
#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x191A6E80)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeamNameRowWidgetController_Context_TypeDefinitionIndex = 85566;

	class UICoopTeamNameRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JDAPCJLHKIO* FightInfo; // 0x28
		::FBHPDPBIGPK* _briefInfo; // 0x30
		::System::Int32 Index; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::FBHPDPBIGPK* get_briefInfo()
		{
			return ((::FBHPDPBIGPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_CONTEXT_GET_BRIEFINFO_OFFSET))(this);
		}
	};
}
