#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvWaitingEventBase; }

#define RPG_GAMECORE_ADVWAITINGEVENTBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B4E60)
#define RPG_GAMECORE_ADVWAITINGEVENTBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B4D20)
#define RPG_GAMECORE_ADVWAITINGEVENTBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B4CC0)

namespace RPG::GameCore
{
	class AdvWaitingEventBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLoop; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITINGEVENTBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvWaitingEventBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvWaitingEventBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITINGEVENTBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvWaitingEventBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvWaitingEventBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITINGEVENTBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
