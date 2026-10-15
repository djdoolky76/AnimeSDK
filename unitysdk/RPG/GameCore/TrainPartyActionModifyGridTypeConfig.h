#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyActionModifyGridTypeConfig; }

#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2D330)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2D340)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2D430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionModifyGridTypeConfig_TypeDefinitionIndex = 18077;

	class TrainPartyActionModifyGridTypeConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionModifyGridTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionModifyGridTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionModifyGridTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionModifyGridTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
