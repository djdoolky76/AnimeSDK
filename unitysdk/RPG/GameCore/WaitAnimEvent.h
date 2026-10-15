#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitAnimEvent; }
namespace System { class String; }

#define RPG_GAMECORE_WAITANIMEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC93690)
#define RPG_GAMECORE_WAITANIMEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC936A0)
#define RPG_GAMECORE_WAITANIMEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC93660)

namespace RPG::GameCore
{
	class WaitAnimEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EventName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAnimEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAnimEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAnimEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAnimEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITANIMEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
