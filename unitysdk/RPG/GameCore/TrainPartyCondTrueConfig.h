#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyCondTrueConfig; }

#define RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2FB10)
#define RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2FB20)
#define RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2FAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondTrueConfig_TypeDefinitionIndex = 18086;

	class TrainPartyCondTrueConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
