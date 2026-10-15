#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetRaidTargetProgress; }

#define RPG_GAMECORE_SETRAIDTARGETPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABFF90)
#define RPG_GAMECORE_SETRAIDTARGETPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABFFA0)
#define RPG_GAMECORE_SETRAIDTARGETPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABFF50)

namespace RPG::GameCore
{
	class SetRaidTargetProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RaidTargetID; // 0x18
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETRAIDTARGETPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetRaidTargetProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetRaidTargetProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETRAIDTARGETPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetRaidTargetProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetRaidTargetProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETRAIDTARGETPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
