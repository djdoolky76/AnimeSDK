#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyActionAddBuildCoinConfig; }

#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2C7E0)
#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2C7F0)
#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2C790)

namespace RPG::GameCore
{
	class TrainPartyActionAddBuildCoinConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Int32 AddNum; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionAddBuildCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionAddBuildCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionAddBuildCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionAddBuildCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
