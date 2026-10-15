#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class XboxStatisticEntry; }

#define MIHOYO_SDK_PC_OS_XBOXSTATISTICSEXTENSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF429D0)

namespace MiHoYo::SDK::PC::OS
{
	class XboxStatisticsExtension : public ::System::Object
	{
	public:
		::Il2CppArray<::MiHoYo::SDK::PC::OS::XboxStatisticEntry*>* stats; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXSTATISTICSEXTENSION_CTOR_OFFSET))(this);
		}

	};
}
