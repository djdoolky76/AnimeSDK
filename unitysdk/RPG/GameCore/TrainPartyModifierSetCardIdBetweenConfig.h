#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierSetCardIdBetweenConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERSETCARDIDBETWEENCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC04E40)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSETCARDIDBETWEENCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC04E50)
#define RPG_GAMECORE_TRAINPARTYMODIFIERSETCARDIDBETWEENCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC05170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierSetCardIdBetweenConfig_TypeDefinitionIndex = 18098;

	class TrainPartyModifierSetCardIdBetweenConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSETCARDIDBETWEENCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierSetCardIdBetweenConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierSetCardIdBetweenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSETCARDIDBETWEENCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierSetCardIdBetweenConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierSetCardIdBetweenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERSETCARDIDBETWEENCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
