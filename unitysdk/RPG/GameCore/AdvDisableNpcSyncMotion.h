#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvDisableNpcSyncMotion; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVDISABLENPCSYNCMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39B270)
#define RPG_GAMECORE_ADVDISABLENPCSYNCMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39B280)
#define RPG_GAMECORE_ADVDISABLENPCSYNCMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39B230)

namespace RPG::GameCore
{
	class AdvDisableNpcSyncMotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean Disable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISABLENPCSYNCMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvDisableNpcSyncMotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvDisableNpcSyncMotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISABLENPCSYNCMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvDisableNpcSyncMotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvDisableNpcSyncMotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISABLENPCSYNCMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
