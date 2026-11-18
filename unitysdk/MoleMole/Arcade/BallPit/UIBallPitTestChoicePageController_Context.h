#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BABHLKDOAKH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KBDGKAJPALP;

#define MOLEMOLE_ARCADE_BALLPIT_UIBALLPITTESTCHOICEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF73080)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int UIBallPitTestChoicePageController_Context_TypeDefinitionIndex = 94949;

	class UIBallPitTestChoicePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KBDGKAJPALP* world; // 0x28
		::Il2CppArray<::BABHLKDOAKH>* Options; // 0x30
		::System::Int32 EventType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_UIBALLPITTESTCHOICEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
