#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashFireProjectileLaunchPoint; }

#define RPG_CLIENT_ROADRASHFIREPROJECTILELAUNCHPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D329DD0)
#define RPG_CLIENT_ROADRASHFIREPROJECTILELAUNCHPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D329C20)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashFireProjectileLaunchPoint_TypeDefinitionIndex = 10287;

	class RoadRashFireProjectileLaunchPoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint BehindDistance; // 0x10
		::RPG::GameCore::FixPoint LateralOffset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHFIREPROJECTILELAUNCHPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashFireProjectileLaunchPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashFireProjectileLaunchPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHFIREPROJECTILELAUNCHPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
