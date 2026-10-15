#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleTriggerEffect; }

#define RPG_GAMECORE_MARBLETRIGGEREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D849440)
#define RPG_GAMECORE_MARBLETRIGGEREFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D849450)
#define RPG_GAMECORE_MARBLETRIGGEREFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8493F0)

namespace RPG::GameCore
{
	class MarbleTriggerEffect : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 EffectId; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETRIGGEREFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleTriggerEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleTriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETRIGGEREFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleTriggerEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleTriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETRIGGEREFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
