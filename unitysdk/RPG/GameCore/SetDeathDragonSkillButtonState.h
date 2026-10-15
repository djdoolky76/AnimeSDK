#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDeathDragonSkillButtonState; }

#define RPG_GAMECORE_SETDEATHDRAGONSKILLBUTTONSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9E930)
#define RPG_GAMECORE_SETDEATHDRAGONSKILLBUTTONSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9E940)
#define RPG_GAMECORE_SETDEATHDRAGONSKILLBUTTONSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9E8F0)

namespace RPG::GameCore
{
	class SetDeathDragonSkillButtonState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 Level; // 0x18
		::RPG::GameCore::BoolEx ShowBoomEffect; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDEATHDRAGONSKILLBUTTONSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDeathDragonSkillButtonState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDeathDragonSkillButtonState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDEATHDRAGONSKILLBUTTONSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDeathDragonSkillButtonState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDeathDragonSkillButtonState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDEATHDRAGONSKILLBUTTONSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
