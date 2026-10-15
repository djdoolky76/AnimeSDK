#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierRefreshCardStepOnRoundFinishConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDSTEPONROUNDFINISHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC32690)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDSTEPONROUNDFINISHCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC326A0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDSTEPONROUNDFINISHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC32960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierRefreshCardStepOnRoundFinishConfig_TypeDefinitionIndex = 18108;

	class TrainPartyModifierRefreshCardStepOnRoundFinishConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDSTEPONROUNDFINISHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierRefreshCardStepOnRoundFinishConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierRefreshCardStepOnRoundFinishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDSTEPONROUNDFINISHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierRefreshCardStepOnRoundFinishConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierRefreshCardStepOnRoundFinishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREFRESHCARDSTEPONROUNDFINISHCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
