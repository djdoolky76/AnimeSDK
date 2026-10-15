#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_SERVERREGIONMANAGER_SUFFIX_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE0C10)

namespace MiHoYo::SDK
{
	class ServerRegionManager_Suffix : public ::System::Object
	{
	public:
		// static const ::System::String* US; // 0x0
		// static const ::System::String* EU; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SERVERREGIONMANAGER_SUFFIX_CTOR_OFFSET))(this);
		}

	};
}
