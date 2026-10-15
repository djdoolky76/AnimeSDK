#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMutePlayerInputAction; }

#define RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CEAA0)
#define RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6CEAB0)
#define RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CE9D0)

namespace RPG::GameCore
{
	class FiveDimMutePlayerInputAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsMute; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMutePlayerInputAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMutePlayerInputAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMutePlayerInputAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMutePlayerInputAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEPLAYERINPUTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
