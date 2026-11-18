#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBDIDMBGFCE.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/InputActionEventType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIPINBALLSKILLBUTTONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BB6470)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballSkillButtonContext_TypeDefinitionIndex = 92570;

	class UIPinballSkillButtonContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 SkillBtnIndex; // 0x28
		::KBDIDMBGFCE DownOperateType; // 0x2C
		::MoleMole::InputLogicEventType LogicEventType; // 0x30
		::KBDIDMBGFCE UpOperateType; // 0x34
		::MoleMole::InputActionEventType ActionEventType; // 0x38
		::MoleMole::LogicButtonInputType LogicButtonInputType; // 0x3C
		::MoleMole::ConfigUICommon_Input_ButtonType LayoutButtonType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSKILLBUTTONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
