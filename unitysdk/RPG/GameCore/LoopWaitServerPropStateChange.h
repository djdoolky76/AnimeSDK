#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitServerPropStateChange; }

#define RPG_GAMECORE_LOOPWAITSERVERPROPSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F6C30)
#define RPG_GAMECORE_LOOPWAITSERVERPROPSTATECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F6C40)
#define RPG_GAMECORE_LOOPWAITSERVERPROPSTATECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F6C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerPropStateChange_TypeDefinitionIndex = 22234;

	class LoopWaitServerPropStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERPROPSTATECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitServerPropStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitServerPropStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERPROPSTATECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitServerPropStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitServerPropStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERPROPSTATECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
