#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PauseToTurnEnd; }

#define RPG_GAMECORE_PAUSETOTURNEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F3980)
#define RPG_GAMECORE_PAUSETOTURNEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8F3990)
#define RPG_GAMECORE_PAUSETOTURNEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F3950)

namespace RPG::GameCore
{
	class PauseToTurnEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Pause; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETOTURNEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseToTurnEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseToTurnEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETOTURNEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseToTurnEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseToTurnEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETOTURNEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
