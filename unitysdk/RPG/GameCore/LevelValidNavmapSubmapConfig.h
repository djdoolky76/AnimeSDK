#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelEntityRef; }
namespace RPG::GameCore { class LevelValidNavmapSubmapConfig; }

#define RPG_GAMECORE_LEVELVALIDNAVMAPSUBMAPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CF290)
#define RPG_GAMECORE_LEVELVALIDNAVMAPSUBMAPCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7CF130)

namespace RPG::GameCore
{
	class LevelValidNavmapSubmapConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SubmapID; // 0x10
		::System::UInt32 NearbyTeleportMappingInfoID; // 0x14
		::Il2CppArray<::RPG::GameCore::LevelEntityRef*>* FiveDimInstances; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELVALIDNAVMAPSUBMAPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelValidNavmapSubmapConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelValidNavmapSubmapConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELVALIDNAVMAPSUBMAPCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
