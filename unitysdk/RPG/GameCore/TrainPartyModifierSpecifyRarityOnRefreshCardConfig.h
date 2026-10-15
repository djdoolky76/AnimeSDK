#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierSpecifyRarityOnRefreshCardConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYRARITYONREFRESHCARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC32790)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYRARITYONREFRESHCARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC327A0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYRARITYONREFRESHCARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC32B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierSpecifyRarityOnRefreshCardConfig_TypeDefinitionIndex = 18111;

	class TrainPartyModifierSpecifyRarityOnRefreshCardConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYRARITYONREFRESHCARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierSpecifyRarityOnRefreshCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierSpecifyRarityOnRefreshCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYRARITYONREFRESHCARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierSpecifyRarityOnRefreshCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierSpecifyRarityOnRefreshCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSPECIFYRARITYONREFRESHCARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
