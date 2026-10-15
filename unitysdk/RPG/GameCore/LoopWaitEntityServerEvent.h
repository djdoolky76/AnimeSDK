#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopWaitEntityServerEvent; }

#define RPG_GAMECORE_LOOPWAITENTITYSERVEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F67A0)
#define RPG_GAMECORE_LOOPWAITENTITYSERVEREVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F67B0)
#define RPG_GAMECORE_LOOPWAITENTITYSERVEREVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F6770)

namespace RPG::GameCore
{
	class LoopWaitEntityServerEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITENTITYSERVEREVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitEntityServerEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitEntityServerEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITENTITYSERVEREVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopWaitEntityServerEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopWaitEntityServerEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITENTITYSERVEREVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
