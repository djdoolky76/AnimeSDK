#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_H5LOGGENERALREPORT_MODULETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB20E50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int H5logGeneralReport_ModuleType_TypeDefinitionIndex = 47501;

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
