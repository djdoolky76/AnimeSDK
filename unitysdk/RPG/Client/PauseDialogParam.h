#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJMFOABLOCE.h"
#include "unitysdk/RPG/Client/PauseDialogTabEnum.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PAUSEDIALOGPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E73D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PauseDialogParam_TypeDefinitionIndex = 73636;

	class PauseDialogParam : public ::System::Object
	{
	public:
		::System::Boolean IsExitBattleBtnDisable; // 0x10
		::System::Boolean IsExitBattleBtnShow; // 0x11
		::System::Byte _padding0[0x2];
		::JJMFOABLOCE ModeType; // 0x14
		::RPG::Client::PauseDialogTabEnum InitTabEnum; // 0x18
		::RPG::GameCore::StageType StageType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAUSEDIALOGPARAM_CTOR_OFFSET))(this);
		}

	};
}
