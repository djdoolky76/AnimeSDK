#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvSetTriggerSkipFakeAvatarType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetTriggerSkipFakeAvatar; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETTRIGGERSKIPFAKEAVATAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D383B30)
#define RPG_GAMECORE_ADVSETTRIGGERSKIPFAKEAVATAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D383B60)
#define RPG_GAMECORE_ADVSETTRIGGERSKIPFAKEAVATAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D383AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetTriggerSkipFakeAvatar_TypeDefinitionIndex = 20528;

	class AdvSetTriggerSkipFakeAvatar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AdvSetTriggerSkipFakeAvatarType TriggerType; // 0x20
		::System::Boolean IsSkip; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETTRIGGERSKIPFAKEAVATAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETTRIGGERSKIPFAKEAVATAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetTriggerSkipFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETTRIGGERSKIPFAKEAVATAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
