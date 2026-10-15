#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleStageBornPointInfo; }

#define RPG_GAMECORE_RTBATTLESTAGEBORNPOINTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4E8A0)
#define RPG_GAMECORE_RTBATTLESTAGEBORNPOINTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4E760)

namespace RPG::GameCore
{
	class RtBattleStageBornPointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x10
		::RPG::GameCore::IVec2 Pos; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESTAGEBORNPOINTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleStageBornPointInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleStageBornPointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESTAGEBORNPOINTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
