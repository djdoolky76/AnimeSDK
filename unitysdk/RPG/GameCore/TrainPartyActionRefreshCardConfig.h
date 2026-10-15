#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyActionRefreshCardConfig; }

#define RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBFFAC0)
#define RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DBFFAD0)
#define RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBFFC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionRefreshCardConfig_TypeDefinitionIndex = 18072;

	class TrainPartyActionRefreshCardConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionRefreshCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionRefreshCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionRefreshCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionRefreshCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONREFRESHCARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
