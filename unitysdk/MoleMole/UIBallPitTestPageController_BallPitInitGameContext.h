#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_BALLPITINITGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D20440)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallPitTestPageController_BallPitInitGameContext_TypeDefinitionIndex = 82077;

	class UIBallPitTestPageController_BallPitInitGameContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 AvatarID; // 0x28
		::System::Int32 LevelID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLPITTESTPAGECONTROLLER_BALLPITINITGAMECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
