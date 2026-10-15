#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitTeleportByAnchor; }

#define RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F6D40)
#define RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F6D50)
#define RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F6D10)

namespace RPG::GameCore
{
	class LoopWaitTeleportByAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitTeleportByAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitTeleportByAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitTeleportByAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitTeleportByAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITTELEPORTBYANCHOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
