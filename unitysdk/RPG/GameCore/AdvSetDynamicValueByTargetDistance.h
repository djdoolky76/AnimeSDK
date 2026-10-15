#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetDynamicValueByTargetDistance; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETDYNAMICVALUEBYTARGETDISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AF7F0)
#define RPG_GAMECORE_ADVSETDYNAMICVALUEBYTARGETDISTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AF830)
#define RPG_GAMECORE_ADVSETDYNAMICVALUEBYTARGETDISTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AF790)

namespace RPG::GameCore
{
	class AdvSetDynamicValueByTargetDistance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x18
		::RPG::GameCore::TargetEvaluator* To; // 0x20
		::System::Boolean IgnoreRadius; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x30
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicString* DynamicKey; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETDYNAMICVALUEBYTARGETDISTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetDynamicValueByTargetDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetDynamicValueByTargetDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETDYNAMICVALUEBYTARGETDISTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetDynamicValueByTargetDistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetDynamicValueByTargetDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETDYNAMICVALUEBYTARGETDISTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
