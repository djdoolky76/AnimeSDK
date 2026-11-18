#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBDIDMBGFCE.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/InputActionEventType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/System/ValueType.h"

#define GOHHMMPFFOG_IDMDMIFABBD__CTOR_OFFSET UNITYSDK_OFFSET(0x635860)

inline static constexpr unsigned int GOHHMMPFFOG_IDMDMIFABBD_TypeDefinitionIndex = 49515;

struct alignas(4) GOHHMMPFFOG_IDMDMIFABBD
{
	::System::Int32 MFPKGNIGAOK; // 0x10
	::MoleMole::LogicButtonInputType PPCMDGKGMCI; // 0x14
	::MoleMole::InputLogicEventType GIOPLKAJKBL; // 0x18
	::MoleMole::InputActionEventType MOKDLLOODBO; // 0x1C
	::MoleMole::ConfigUICommon_Input_ButtonType FKGAHNFHENI; // 0x20
	::KBDIDMBGFCE NDAMENBGCHA; // 0x24

	::System::Void _ctor(::System::Int32 CFFFADGEKLK, ::MoleMole::LogicButtonInputType GLIPLEKODIL, ::MoleMole::InputLogicEventType DHNEEJCNAID, ::MoleMole::InputActionEventType INMOBMEDEPP, ::MoleMole::ConfigUICommon_Input_ButtonType JDAJBJCDNMM, ::KBDIDMBGFCE NFEJLEOLEFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::LogicButtonInputType, ::MoleMole::InputLogicEventType, ::MoleMole::InputActionEventType, ::MoleMole::ConfigUICommon_Input_ButtonType, ::KBDIDMBGFCE))((::PBYTE)hIl2Cpp + GOHHMMPFFOG_IDMDMIFABBD__CTOR_OFFSET))(this, CFFFADGEKLK, GLIPLEKODIL, DHNEEJCNAID, INMOBMEDEPP, JDAJBJCDNMM, NFEJLEOLEFD);
	}
};
