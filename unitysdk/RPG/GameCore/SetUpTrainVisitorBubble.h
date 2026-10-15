#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetUpTrainVisitorBubble; }

#define RPG_GAMECORE_SETUPTRAINVISITORBUBBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC94C0)
#define RPG_GAMECORE_SETUPTRAINVISITORBUBBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC94D0)
#define RPG_GAMECORE_SETUPTRAINVISITORBUBBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC9400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetUpTrainVisitorBubble_TypeDefinitionIndex = 21596;

	class SetUpTrainVisitorBubble : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPTRAINVISITORBUBBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetUpTrainVisitorBubble* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetUpTrainVisitorBubble*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPTRAINVISITORBUBBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetUpTrainVisitorBubble* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetUpTrainVisitorBubble*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPTRAINVISITORBUBBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
