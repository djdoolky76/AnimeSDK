#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceWaitFinishLineTip; }

#define RPG_GAMECORE_CAKERACEWAITFINISHLINETIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBFF510)
#define RPG_GAMECORE_CAKERACEWAITFINISHLINETIP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBFF520)
#define RPG_GAMECORE_CAKERACEWAITFINISHLINETIP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBFF450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceWaitFinishLineTip_TypeDefinitionIndex = 24759;

	class CakeRaceWaitFinishLineTip : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITFINISHLINETIP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceWaitFinishLineTip* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceWaitFinishLineTip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITFINISHLINETIP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceWaitFinishLineTip* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceWaitFinishLineTip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITFINISHLINETIP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
