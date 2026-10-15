#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJMFOABLOCE.h"
#include "unitysdk/RPG/Client/PauseDialogTabEnum.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PAUSEDIALOGPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xDA91A30)

namespace RPG::Client
{
	class PauseDialogParam : public ::System::Object
	{
	public:
		::RPG::Client::PauseDialogTabEnum InitTabEnum; // 0x10
		::JJMFOABLOCE ModeType; // 0x14
		::System::Boolean IsExitBattleBtnShow; // 0x18
		::System::Boolean IsExitBattleBtnDisable; // 0x19
		::System::Byte _padding0[0x2];
		::RPG::GameCore::StageType StageType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAUSEDIALOGPARAM_CTOR_OFFSET))(this);
		}

	};
}
