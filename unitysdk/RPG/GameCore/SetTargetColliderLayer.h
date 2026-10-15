#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetTargetColliderLayer; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETCOLLIDERLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC4AD0)
#define RPG_GAMECORE_SETTARGETCOLLIDERLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC4B00)
#define RPG_GAMECORE_SETTARGETCOLLIDERLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC4A80)

namespace RPG::GameCore
{
	class SetTargetColliderLayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* ColliderName; // 0x20
		::RPG::GameCore::DynamicString* LayerName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCOLLIDERLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetColliderLayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetColliderLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCOLLIDERLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetColliderLayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetColliderLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCOLLIDERLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
