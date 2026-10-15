#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyActionModifySpecifyGridConfig; }

#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2D350)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2D360)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2D470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionModifySpecifyGridConfig_TypeDefinitionIndex = 18083;

	class TrainPartyActionModifySpecifyGridConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionModifySpecifyGridConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionModifySpecifyGridConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionModifySpecifyGridConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionModifySpecifyGridConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
