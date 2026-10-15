#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNPCNearbyConfig; }

#define RPG_GAMECORE_LEVELNPCNEARBYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B8260)
#define RPG_GAMECORE_LEVELNPCNEARBYCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7B8630)
#define RPG_GAMECORE_LEVELNPCNEARBYCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7B8270)

namespace RPG::GameCore
{
	class LevelNPCNearbyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ApproachRange; // 0x10
		::System::Single DepartureRange; // 0x14
		::RPG::MVector3 Offset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCNearbyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCNearbyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCNearbyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCNearbyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYCONFIG_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
