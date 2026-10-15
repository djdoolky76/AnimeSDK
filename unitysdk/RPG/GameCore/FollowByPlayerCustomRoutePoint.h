#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FollowByPlayerCustomRoutePoint; }

#define RPG_GAMECORE_FOLLOWBYPLAYERCUSTOMROUTEPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E7820)
#define RPG_GAMECORE_FOLLOWBYPLAYERCUSTOMROUTEPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E76E0)

namespace RPG::GameCore
{
	class FollowByPlayerCustomRoutePoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SwitchRoutePoint; // 0x10
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWBYPLAYERCUSTOMROUTEPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FollowByPlayerCustomRoutePoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FollowByPlayerCustomRoutePoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWBYPLAYERCUSTOMROUTEPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
