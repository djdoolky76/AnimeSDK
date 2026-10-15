#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyDialogueEventOptionConfig; }

#define RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTOPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC03340)
#define RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTOPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC03280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyDialogueEventOptionConfig_TypeDefinitionIndex = 18091;

	class TrainPartyDialogueEventOptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 OptionID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTOPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyDialogueEventOptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyDialogueEventOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTOPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
