#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VisionZoneTag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrackNpcVisionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TRACKNPCVISIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2A720)
#define RPG_GAMECORE_TRACKNPCVISIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2A390)

namespace RPG::GameCore
{
	class TrackNpcVisionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VisionID; // 0x10
		::System::Single DistanceRange; // 0x18
		::System::Single YawAngleRange; // 0x1C
		::System::Single PitchAngleLimitMin; // 0x20
		::System::Single PitchAngleLimitMax; // 0x24
		::System::UInt32 Priority; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* RayStartPointName; // 0x30
		::System::String* RayEndPointName; // 0x38
		::RPG::GameCore::VisionZoneTag ZoneTag; // 0x40
		::System::Boolean UseForVision; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCVISIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrackNpcVisionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrackNpcVisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCVISIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
