#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AidType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TryTriggerAid; }

#define RPG_GAMECORE_TRYTRIGGERAID_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC61780)
#define RPG_GAMECORE_TRYTRIGGERAID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC61790)
#define RPG_GAMECORE_TRYTRIGGERAID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC61750)

namespace RPG::GameCore
{
	class TryTriggerAid : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AidType AidType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Probility; // 0x20
		::RPG::GameCore::DynamicFloat* LimitCountPerTurn; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYTRIGGERAID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryTriggerAid* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryTriggerAid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYTRIGGERAID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TryTriggerAid* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TryTriggerAid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRYTRIGGERAID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
