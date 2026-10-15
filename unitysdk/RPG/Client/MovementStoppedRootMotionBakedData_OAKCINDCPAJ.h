#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MOVEMENTSTOPPEDROOTMOTIONBAKEDDATA_OAKCINDCPAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xD8CA0B0)

namespace RPG::Client
{
	class MovementStoppedRootMotionBakedData_OAKCINDCPAJ : public ::System::Object
	{
	public:
		::System::Int32 FNNMNGCKFGI; // 0x10
		::System::Int32 MAGGNFANAGP; // 0x14
		::System::Single AEKAAOCLNHE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVEMENTSTOPPEDROOTMOTIONBAKEDDATA_OAKCINDCPAJ_CTOR_OFFSET))(this);
		}

	};
}
