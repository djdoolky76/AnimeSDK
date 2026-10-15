#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNPCNearbyConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNPCNearbyEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELNPCNEARBYEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B83E0)
#define RPG_GAMECORE_LEVELNPCNEARBYEVENTCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7B83F0)
#define RPG_GAMECORE_LEVELNPCNEARBYEVENTCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7B7750)

namespace RPG::GameCore
{
	class LevelNPCNearbyEventConfig : public ::RPG::GameCore::LevelNPCNearbyConfig
	{
	public:
		::System::String* ApproachEventName; // 0x28
		::System::String* DepartureEventName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCNearbyEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCNearbyEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYEVENTCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCNearbyEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCNearbyEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYEVENTCONFIG_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
