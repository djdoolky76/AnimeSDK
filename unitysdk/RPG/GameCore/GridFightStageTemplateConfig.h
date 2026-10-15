#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBattleTemplate; }
namespace RPG::GameCore { class GridFightStageTemplateConfig; }
namespace RPG::GameCore { class GridFightWaveInfo; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSTAGETEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7456E0)
#define RPG_GAMECORE_GRIDFIGHTSTAGETEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7453B0)

namespace RPG::GameCore
{
	class GridFightStageTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GridFightWaveInfo*>* GridFightWaveList; // 0x10
		::System::String* ActiveBattleTemplate; // 0x18
		::Il2CppArray<::RPG::GameCore::GridFightBattleTemplate*>* BattleTemplateList; // 0x20
		::System::Boolean DisableAllStolenRule; // 0x28
		::System::Boolean DisableStolenRefundFromSell; // 0x29
		::System::Boolean DisableStolenRefundFromHold; // 0x2A
		::System::Boolean DisableStolenRefundFromInitialPurchase; // 0x2B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGETEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightStageTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightStageTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGETEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
