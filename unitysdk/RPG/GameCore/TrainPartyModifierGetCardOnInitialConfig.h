#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierGetCardOnInitialConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERGETCARDONINITIALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC325F0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERGETCARDONINITIALCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC32600)
#define RPG_GAMECORE_TRAINPARTYMODIFIERGETCARDONINITIALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC327D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierGetCardOnInitialConfig_TypeDefinitionIndex = 18103;

	class TrainPartyModifierGetCardOnInitialConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERGETCARDONINITIALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierGetCardOnInitialConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierGetCardOnInitialConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERGETCARDONINITIALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierGetCardOnInitialConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierGetCardOnInitialConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERGETCARDONINITIALCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
