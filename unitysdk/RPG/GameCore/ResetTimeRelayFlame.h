#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetTimeRelayFlame; }

#define RPG_GAMECORE_RESETTIMERELAYFLAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98C1C0)
#define RPG_GAMECORE_RESETTIMERELAYFLAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D98C1D0)
#define RPG_GAMECORE_RESETTIMERELAYFLAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98C100)

namespace RPG::GameCore
{
	class ResetTimeRelayFlame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTIMERELAYFLAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetTimeRelayFlame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetTimeRelayFlame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTIMERELAYFLAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetTimeRelayFlame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetTimeRelayFlame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTIMERELAYFLAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
