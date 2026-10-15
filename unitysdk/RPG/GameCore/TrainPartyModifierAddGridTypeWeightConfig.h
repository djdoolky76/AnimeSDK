#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierAddGridTypeWeightConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERADDGRIDTYPEWEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC31F20)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDGRIDTYPEWEIGHTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC31F30)
#define RPG_GAMECORE_TRAINPARTYMODIFIERADDGRIDTYPEWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC31EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierAddGridTypeWeightConfig_TypeDefinitionIndex = 18100;

	class TrainPartyModifierAddGridTypeWeightConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDGRIDTYPEWEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierAddGridTypeWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierAddGridTypeWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDGRIDTYPEWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierAddGridTypeWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierAddGridTypeWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERADDGRIDTYPEWEIGHTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
