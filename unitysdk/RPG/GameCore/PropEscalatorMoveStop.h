#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropEscalatorMoveStop; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPESCALATORMOVESTOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94A960)
#define RPG_GAMECORE_PROPESCALATORMOVESTOP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D94A9A0)
#define RPG_GAMECORE_PROPESCALATORMOVESTOP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D94A900)

namespace RPG::GameCore
{
	class PropEscalatorMoveStop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTOP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropEscalatorMoveStop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropEscalatorMoveStop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTOP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropEscalatorMoveStop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropEscalatorMoveStop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTOP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
