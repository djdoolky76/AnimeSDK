#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierReplaceGridAfterGeneratedConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDAFTERGENERATEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC326B0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDAFTERGENERATEDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC326C0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDAFTERGENERATEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC329A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierReplaceGridAfterGeneratedConfig_TypeDefinitionIndex = 18101;

	class TrainPartyModifierReplaceGridAfterGeneratedConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDAFTERGENERATEDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierReplaceGridAfterGeneratedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierReplaceGridAfterGeneratedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDAFTERGENERATEDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierReplaceGridAfterGeneratedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierReplaceGridAfterGeneratedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDAFTERGENERATEDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
