#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleFlowStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68EE20)
#define RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68EC90)

namespace RPG::GameCore
{
	class ExpeditionBattleFlowStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ExpeditionBattleFlowStateType Type; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* JsonPath; // 0x18
		::System::UInt32 MinReplayCount; // 0x20
		::System::UInt32 MaxReplayCount; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleFlowStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleFlowStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEFLOWSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
