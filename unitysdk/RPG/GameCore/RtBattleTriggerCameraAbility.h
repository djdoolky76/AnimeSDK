#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleTriggerCameraAbility; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_RTBATTLETRIGGERCAMERAABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4F750)
#define RPG_GAMECORE_RTBATTLETRIGGERCAMERAABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4F790)
#define RPG_GAMECORE_RTBATTLETRIGGERCAMERAABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4F6F0)

namespace RPG::GameCore
{
	class RtBattleTriggerCameraAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AbilityName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETRIGGERCAMERAABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleTriggerCameraAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleTriggerCameraAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETRIGGERCAMERAABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleTriggerCameraAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleTriggerCameraAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETRIGGERCAMERAABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
