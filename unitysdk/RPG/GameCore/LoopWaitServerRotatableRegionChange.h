#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitServerRotatableRegionChange; }

#define RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F07B410)
#define RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F07B420)
#define RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F07B3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerRotatableRegionChange_TypeDefinitionIndex = 21596;

	class LoopWaitServerRotatableRegionChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitServerRotatableRegionChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitServerRotatableRegionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitServerRotatableRegionChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitServerRotatableRegionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERROTATABLEREGIONCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
