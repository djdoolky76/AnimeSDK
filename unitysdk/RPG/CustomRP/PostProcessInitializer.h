#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_POSTPROCESSINITIALIZER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC3BF90)
#define RPG_CUSTOMRP_POSTPROCESSINITIALIZER_INITVOLUMEMANAGER_OFFSET UNITYSDK_OFFSET(0x1CC3B350)

namespace RPG::CustomRP
{
	class PostProcessInitializer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_POSTPROCESSINITIALIZER_CTOR_OFFSET))(this);
		}

		static ::System::Void InitVolumeManager()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_POSTPROCESSINITIALIZER_INITVOLUMEMANAGER_OFFSET))();
		}

	};
}
