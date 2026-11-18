#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/PLNDEDKMFEE.h"

#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_BALLPITINITGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5F4C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameMainPageController_BallPitInitGameContext_TypeDefinitionIndex = 95143;

	class UIBallGameMainPageController_BallPitInitGameContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::PLNDEDKMFEE stateData; // 0x28
		::System::Int32 AvatarID; // 0x48
		::System::Boolean hasRoleData; // 0x4C
		::System::Boolean isContinue; // 0x4D
		::System::Byte _padding0[0x2];
		::System::Int32 LevelID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_BALLPITINITGAMECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
