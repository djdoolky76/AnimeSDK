#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitBeHit; }

#define RPG_GAMECORE_LOOPWAITBEHIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C8C70)
#define RPG_GAMECORE_LOOPWAITBEHIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C8C80)
#define RPG_GAMECORE_LOOPWAITBEHIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C8C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitBeHit_TypeDefinitionIndex = 22129;

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
