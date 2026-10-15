#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierAddCardOnUsedOutConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDONUSEDOUTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC045B0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDONUSEDOUTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC045C0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDONUSEDOUTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC04570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierAddCardOnUsedOutConfig_TypeDefinitionIndex = 18116;

	class TrainPartyModifierAddCardOnUsedOutConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDONUSEDOUTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierAddCardOnUsedOutConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierAddCardOnUsedOutConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDONUSEDOUTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierAddCardOnUsedOutConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierAddCardOnUsedOutConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDCARDONUSEDOUTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
