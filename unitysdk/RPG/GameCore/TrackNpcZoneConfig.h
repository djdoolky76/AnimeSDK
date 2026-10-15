#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VisionZoneTag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrackNpcAlertConfig; }
namespace RPG::GameCore { class TrackNpcPerceiveConfig; }
namespace RPG::GameCore { class TrackNpcTrackConfig; }
namespace RPG::GameCore { class TrackNpcZoneConfig; }

#define RPG_GAMECORE_TRACKNPCZONECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2A8C0)
#define RPG_GAMECORE_TRACKNPCZONECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2A760)

namespace RPG::GameCore
{
	class TrackNpcZoneConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::VisionZoneTag ZoneTag; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TrackNpcPerceiveConfig* PerceiveConfig; // 0x18
		::RPG::GameCore::TrackNpcAlertConfig* AlertConfig; // 0x20
		::RPG::GameCore::TrackNpcTrackConfig* TrackConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCZONECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrackNpcZoneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrackNpcZoneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCZONECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
