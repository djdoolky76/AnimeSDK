#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TraceCurrentHeartDialNPC; }

#define RPG_GAMECORE_TRACECURRENTHEARTDIALNPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC28260)
#define RPG_GAMECORE_TRACECURRENTHEARTDIALNPC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC28270)
#define RPG_GAMECORE_TRACECURRENTHEARTDIALNPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC28230)

namespace RPG::GameCore
{
	class TraceCurrentHeartDialNPC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean OpenBigMap; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACECURRENTHEARTDIALNPC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TraceCurrentHeartDialNPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TraceCurrentHeartDialNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACECURRENTHEARTDIALNPC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TraceCurrentHeartDialNPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TraceCurrentHeartDialNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACECURRENTHEARTDIALNPC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
