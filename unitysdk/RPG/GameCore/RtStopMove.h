#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtStopMove; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTSTOPMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA65FC0)
#define RPG_GAMECORE_RTSTOPMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA66000)
#define RPG_GAMECORE_RTSTOPMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA65F60)

namespace RPG::GameCore
{
	class RtStopMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTOPMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtStopMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtStopMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTOPMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtStopMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtStopMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTOPMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
