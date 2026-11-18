#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICIAEPPMOMP.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_CONTEXT_GET_BOSSBASEID_OFFSET UNITYSDK_OFFSET(0x17BC08A0)
#define MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC09E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABSkillDialogItemRowWidgetController_Context_TypeDefinitionIndex = 70822;

	class UIRABSkillDialogItemRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ICIAEPPMOMP skillIndex; // 0x28
		::System::Boolean showDetailDialog; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 bossCharacterId; // 0x30
		::System::Int32 skillDescId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_bossBaseId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSKILLDIALOGITEMROWWIDGETCONTROLLER_CONTEXT_GET_BOSSBASEID_OFFSET))(this);
		}
	};
}
