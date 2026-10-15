#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNPCNearbyConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNPCNearbyAnimConfig; }

#define RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B8020)
#define RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7B8030)
#define RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7B7710)

namespace RPG::GameCore
{
	class LevelNPCNearbyAnimConfig : public ::RPG::GameCore::LevelNPCNearbyConfig
	{
	public:
		::System::UInt32 ApproachFreeStyleMotionID; // 0x28
		::System::UInt32 DepartureFreeStyleMotionID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCNearbyAnimConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCNearbyAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCNearbyAnimConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCNearbyAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
