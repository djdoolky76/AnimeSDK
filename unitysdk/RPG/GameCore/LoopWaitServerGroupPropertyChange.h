#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitServerGroupPropertyChange; }

#define RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F6AE0)
#define RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F6AF0)
#define RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F6AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerGroupPropertyChange_TypeDefinitionIndex = 21182;

	class LoopWaitServerGroupPropertyChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitServerGroupPropertyChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitServerGroupPropertyChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitServerGroupPropertyChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitServerGroupPropertyChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
