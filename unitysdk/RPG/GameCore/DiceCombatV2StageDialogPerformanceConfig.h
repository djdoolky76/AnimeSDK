#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatV2SingleDialogPerformance; }
namespace RPG::GameCore { class DiceCombatV2StageDialogPerformanceConfig; }

#define RPG_GAMECORE_DICECOMBATV2STAGEDIALOGPERFORMANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D616470)
#define RPG_GAMECORE_DICECOMBATV2STAGEDIALOGPERFORMANCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D616380)

namespace RPG::GameCore
{
	class DiceCombatV2StageDialogPerformanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>* PerformanceList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2STAGEDIALOGPERFORMANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatV2StageDialogPerformanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatV2StageDialogPerformanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2STAGEDIALOGPERFORMANCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
