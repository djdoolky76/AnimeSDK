#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropAttractEnemyBehaviourType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetTargetAlertValue; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETTARGETALERTVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3838D0)
#define RPG_GAMECORE_ADVSETTARGETALERTVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D383900)
#define RPG_GAMECORE_ADVSETTARGETALERTVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D383880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetTargetAlertValue_TypeDefinitionIndex = 20345;

	class AdvSetTargetAlertValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PropAttractEnemyBehaviourType BehaviourType; // 0x20
		::System::Single AlertValue; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETTARGETALERTVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetTargetAlertValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetTargetAlertValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETTARGETALERTVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetTargetAlertValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetTargetAlertValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETTARGETALERTVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
