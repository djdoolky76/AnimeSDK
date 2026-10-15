#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierListConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC32890)
#define RPG_GAMECORE_TRAINPARTYMODIFIERLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC32850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierListConfig_TypeDefinitionIndex = 18095;

	class TrainPartyModifierListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
