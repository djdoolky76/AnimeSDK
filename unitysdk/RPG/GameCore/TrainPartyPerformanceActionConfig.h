#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyPerformanceActionConfig; }
namespace RPG::GameCore { class TrainPartyPerformanceFreeStyleAction; }

#define RPG_GAMECORE_TRAINPARTYPERFORMANCEACTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC061D0)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCEACTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC060E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPerformanceActionConfig_TypeDefinitionIndex = 16263;

	class TrainPartyPerformanceActionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TrainPartyPerformanceFreeStyleAction*>* FreeStyleActions; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCEACTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyPerformanceActionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyPerformanceActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCEACTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
