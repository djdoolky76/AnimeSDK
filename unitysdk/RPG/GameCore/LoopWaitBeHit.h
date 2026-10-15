#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitBeHit; }

#define RPG_GAMECORE_LOOPWAITBEHIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F66F0)
#define RPG_GAMECORE_LOOPWAITBEHIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F6700)
#define RPG_GAMECORE_LOOPWAITBEHIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F66B0)

namespace RPG::GameCore
{
	class LoopWaitBeHit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBEHIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitBeHit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitBeHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBEHIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitBeHit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitBeHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBEHIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
