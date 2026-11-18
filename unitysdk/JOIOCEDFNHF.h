#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialPopWindowController_LogicDelegate.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define JOIOCEDFNHF_EDHNDPBIPGJ_OFFSET UNITYSDK_OFFSET(0x13CD3FC0)
#define JOIOCEDFNHF_OBBJKALBMFL_OFFSET UNITYSDK_OFFSET(0x13CD3FB0)
#define JOIOCEDFNHF_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13CD30E0)
#define JOIOCEDFNHF_REFRESHPAGE_OFFSET UNITYSDK_OFFSET(0x13CD3410)
#define JOIOCEDFNHF__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD3FA0)

inline static constexpr unsigned int JOIOCEDFNHF_TypeDefinitionIndex = 40879;

class JOIOCEDFNHF : public ::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate
{
public:
	::System::String* DCGGGPBABEK; // 0x88
	::System::Int32 GAJCIHJHLBM; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIOCEDFNHF__CTOR_OFFSET))(this);
	}

	::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + JOIOCEDFNHF_ONUIOPEN_OFFSET))(this, KMCJLGLCOHD);
	}

	::System::Void RefreshPage(::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason CKGCEKJKMHE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason))((::PBYTE)hIl2Cpp + JOIOCEDFNHF_REFRESHPAGE_OFFSET))(this, CKGCEKJKMHE);
	}

	::System::Void OBBJKALBMFL(::MoleMole::UIControllerContextBase* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + JOIOCEDFNHF_OBBJKALBMFL_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void EDHNDPBIPGJ(::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate_SwitchCurIdReason))((::PBYTE)hIl2Cpp + JOIOCEDFNHF_EDHNDPBIPGJ_OFFSET))(this, MIALFKCCCPI);
	}
};
