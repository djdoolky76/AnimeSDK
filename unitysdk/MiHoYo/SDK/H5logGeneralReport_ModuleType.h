#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_H5LOGGENERALREPORT_MODULETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0xAF7FF50)

namespace MiHoYo::SDK
{
	class H5logGeneralReport_ModuleType : public ::System::Object
	{
	public:
		// static const ::System::String* VOX; // 0x0
		// static const ::System::String* TRANSLATE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT_MODULETYPE_CTOR_OFFSET))(this);
		}

	};
}
