#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetAIStop; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETAISTOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AECD0)
#define RPG_GAMECORE_ADVSETAISTOP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AECE0)
#define RPG_GAMECORE_ADVSETAISTOP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AECA0)

namespace RPG::GameCore
{
	class AdvSetAIStop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* EntityInstanceID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAISTOP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetAIStop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetAIStop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAISTOP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetAIStop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetAIStop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAISTOP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
