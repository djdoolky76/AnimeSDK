#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class PLDJFGCHMKK;

#define MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1915AE10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityPinkRowWidgetController_Context_TypeDefinitionIndex = 79208;

	class UIActivityPinkRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::PLDJFGCHMKK* item; // 0x28
		::System::Int32 activityId; // 0x30
		::System::Int32 index; // 0x34
		::System::Int32 taskId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
