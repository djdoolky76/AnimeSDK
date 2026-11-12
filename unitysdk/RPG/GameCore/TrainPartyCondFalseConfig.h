#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyCondFalseConfig; }

#define RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE43270)
#define RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE43280)
#define RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE43230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondFalseConfig_TypeDefinitionIndex = 18252;

	class TrainPartyCondFalseConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
