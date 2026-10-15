#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleQTEBaseConfig.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleVersusClickQTEConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FloatCurve; }

#define RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D466730)
#define RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D466790)
#define RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D46A330)

namespace RPG::GameCore
{
	class BattleVersusClickQTEConfig : public ::RPG::GameCore::BattleQTEBaseConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* TotalProgress; // 0x38
		::RPG::GameCore::DynamicFloat* InitializedProgress; // 0x40
		::RPG::GameCore::DynamicFloat* IncreaseProgressPerClick; // 0x48
		::RPG::GameCore::FloatCurve* IncreaseProgressPerClickCurve; // 0x50
		::RPG::GameCore::DynamicFloat* IncreaseProgressLength; // 0x58
		::RPG::GameCore::FloatCurve* AutoIncreaseProgressCurve; // 0x60
		::RPG::GameCore::FloatCurve* AutoDecreaseProgressCurve; // 0x68
		::RPG::GameCore::DynamicString* SyncDynamicKey; // 0x70
		::RPG::GameCore::DynamicValueContextScope SyncContextScope; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleVersusClickQTEConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleVersusClickQTEConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleVersusClickQTEConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleVersusClickQTEConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEVERSUSCLICKQTECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
