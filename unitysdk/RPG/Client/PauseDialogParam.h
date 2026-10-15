#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJMFOABLOCE.h"
#include "unitysdk/RPG/Client/PauseDialogTabEnum.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PAUSEDIALOGPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xDA88180)

namespace RPG::Client
{
	inline static constexpr unsigned int PauseDialogParam_TypeDefinitionIndex = 71647;

	class PauseDialogParam : public ::System::Object
	{
	public:
		::RPG::Client::PauseDialogTabEnum InitTabEnum; // 0x10
		::RPG::GameCore::StageType StageType; // 0x14
		::JJMFOABLOCE ModeType; // 0x18
		::System::Boolean IsExitBattleBtnDisable; // 0x1C
		::System::Boolean IsExitBattleBtnShow; // 0x1D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAUSEDIALOGPARAM_CTOR_OFFSET))(this);
		}

	};
}
