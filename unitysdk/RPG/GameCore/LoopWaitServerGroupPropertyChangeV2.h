#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitServerGroupPropertyChangeV2; }

#define RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGEV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F6B30)
#define RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGEV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F6B40)
#define RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGEV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F6B00)

namespace RPG::GameCore
{
	class LoopWaitServerGroupPropertyChangeV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGEV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitServerGroupPropertyChangeV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitServerGroupPropertyChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGEV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitServerGroupPropertyChangeV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitServerGroupPropertyChangeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERGROUPPROPERTYCHANGEV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
