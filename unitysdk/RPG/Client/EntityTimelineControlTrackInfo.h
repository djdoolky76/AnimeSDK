#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::Client { class TimeRewindPathRuntime; }

#define RPG_CLIENT_ENTITYTIMELINECONTROLTRACKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xCDF45A0)
#define RPG_CLIENT_ENTITYTIMELINECONTROLTRACKINFO_PAKPBDDBLII_OFFSET UNITYSDK_OFFSET(0xCDF4420)

namespace RPG::Client
{
	class EntityTimelineControlTrackInfo : public ::System::Object
	{
	public:
		::System::UInt32 PropID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::Client::EntityTimelineControlNode*>* EntityTimelineControlNodes; // 0x18
		::Il2CppArray<::RPG::Client::TimeRewindPathRuntime*>* TimeRewindPathRuntimes; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYTIMELINECONTROLTRACKINFO_CTOR_OFFSET))(this);
		}

		::System::Void PAKPBDDBLII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYTIMELINECONTROLTRACKINFO_PAKPBDDBLII_OFFSET))(this);
		}

	};
}
