#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UI3DCameraStateBase.h"

#define RPG_GAMECORE_UI3DCAMERASTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xE864360)

namespace RPG::GameCore
{
	class UI3DCameraState : public ::RPG::GameCore::UI3DCameraStateBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERASTATE_CTOR_OFFSET))(this);
		}

	};
}
