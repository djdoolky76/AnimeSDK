#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierUpdateAllPassengerStatConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERUPDATEALLPASSENGERSTATCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC04F00)
#define RPG_GAMECORE_TRAINPARTYMODIFIERUPDATEALLPASSENGERSTATCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC04F10)
#define RPG_GAMECORE_TRAINPARTYMODIFIERUPDATEALLPASSENGERSTATCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC052F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierUpdateAllPassengerStatConfig_TypeDefinitionIndex = 18104;

	class TrainPartyModifierUpdateAllPassengerStatConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERUPDATEALLPASSENGERSTATCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierUpdateAllPassengerStatConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierUpdateAllPassengerStatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERUPDATEALLPASSENGERSTATCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierUpdateAllPassengerStatConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierUpdateAllPassengerStatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERUPDATEALLPASSENGERSTATCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
