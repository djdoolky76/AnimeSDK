#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBDIDMBGFCE.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/InputActionEventType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/System/ValueType.h"

#define GOHHMMPFFOG_GKDIJAMGJDK__CTOR_OFFSET UNITYSDK_OFFSET(0x7B3410)

inline static constexpr unsigned int GOHHMMPFFOG_GKDIJAMGJDK_TypeDefinitionIndex = 49514;

struct alignas(4) GOHHMMPFFOG_GKDIJAMGJDK
{
	::System::Int32 MFPKGNIGAOK; // 0x10
	::MoleMole::LogicButtonInputType PPCMDGKGMCI; // 0x14
	::MoleMole::InputLogicEventType GIOPLKAJKBL; // 0x18
	::MoleMole::InputActionEventType MOKDLLOODBO; // 0x1C
	::MoleMole::ConfigUICommon_Input_ButtonType FKGAHNFHENI; // 0x20
	::KBDIDMBGFCE JJGAMBPNIIP; // 0x24
	::KBDIDMBGFCE OGICMCGIFNA; // 0x28

	::System::Void _ctor(::System::Int32 CFFFADGEKLK, ::MoleMole::LogicButtonInputType GLIPLEKODIL, ::MoleMole::InputLogicEventType DHNEEJCNAID, ::MoleMole::InputActionEventType INMOBMEDEPP, ::MoleMole::ConfigUICommon_Input_ButtonType JDAJBJCDNMM, ::KBDIDMBGFCE EBFNNOAGOMI, ::KBDIDMBGFCE JCDMAJJELCI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::LogicButtonInputType, ::MoleMole::InputLogicEventType, ::MoleMole::InputActionEventType, ::MoleMole::ConfigUICommon_Input_ButtonType, ::KBDIDMBGFCE, ::KBDIDMBGFCE))((::PBYTE)hIl2Cpp + GOHHMMPFFOG_GKDIJAMGJDK__CTOR_OFFSET))(this, CFFFADGEKLK, GLIPLEKODIL, DHNEEJCNAID, INMOBMEDEPP, JDAJBJCDNMM, EBFNNOAGOMI, JCDMAJJELCI);
	}
};
