#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICIAEPPMOMP.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER_CONTEXT_GET_MONSTERBASEID_OFFSET UNITYSDK_OFFSET(0x17BC0710)
#define MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC0850)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelBossSkillRowWidgetController_Context_TypeDefinitionIndex = 63021;

	class UIRABLevelBossSkillRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ICIAEPPMOMP skillIndex; // 0x28
		::System::Int32 bossCharacterId; // 0x2C
		::System::Int32 skillDescId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_monsterBaseId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER_CONTEXT_GET_MONSTERBASEID_OFFSET))(this);
		}
	};
}
