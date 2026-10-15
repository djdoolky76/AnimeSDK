#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyDialogueEventEffectConfig; }

#define RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC30B20)
#define RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC30AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyDialogueEventEffectConfig_TypeDefinitionIndex = 18092;

	class TrainPartyDialogueEventEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyDialogueEventEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyDialogueEventEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYDIALOGUEEVENTEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
