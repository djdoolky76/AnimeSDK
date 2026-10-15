#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierModifyPassengerStatRatioConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYPASSENGERSTATRATIOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC32650)
#define RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYPASSENGERSTATRATIOCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC32660)
#define RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYPASSENGERSTATRATIOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC328E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierModifyPassengerStatRatioConfig_TypeDefinitionIndex = 18109;

	class TrainPartyModifierModifyPassengerStatRatioConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYPASSENGERSTATRATIOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierModifyPassengerStatRatioConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierModifyPassengerStatRatioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYPASSENGERSTATRATIOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierModifyPassengerStatRatioConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierModifyPassengerStatRatioConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYPASSENGERSTATRATIOCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
