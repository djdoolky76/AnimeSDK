#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAllRogueDoorState; }

#define RPG_GAMECORE_SETALLROGUEDOORSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA93D20)
#define RPG_GAMECORE_SETALLROGUEDOORSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA93D30)
#define RPG_GAMECORE_SETALLROGUEDOORSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA93CF0)

namespace RPG::GameCore
{
	class SetAllRogueDoorState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLROGUEDOORSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAllRogueDoorState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAllRogueDoorState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLROGUEDOORSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAllRogueDoorState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAllRogueDoorState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLROGUEDOORSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
