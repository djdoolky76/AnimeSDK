#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ButtonQTETaskEntryBase.h"

class BCMJNECADGK;

#define MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYTIMESENTRY_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x174F2CE0)
#define MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYTIMESENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x174F2E20)
#define MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYTIMESENTRY___BASE_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x174F2E90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ButtonQTETaskMultiPressByTimesEntry_TypeDefinitionIndex = 60360;

	class ButtonQTETaskMultiPressByTimesEntry : public ::MoleMole::Config::ButtonQTETaskEntryBase
	{
	public:
		::System::Boolean IsInfinitePressTimes; // 0xA8
		::System::Byte _padding0[0x3];
		::System::Int32 ListenTimes; // 0xAC
		::System::Single PressIntervalTimeThreshold; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYTIMESENTRY__CTOR_OFFSET))(this);
		}

		::BCMJNECADGK* CreateRealtimeQTETask()
		{
			return ((::BCMJNECADGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYTIMESENTRY_CREATEREALTIMEQTETASK_OFFSET))(this);
		}

		::BCMJNECADGK* __base_CreateRealtimeQTETask()
		{
			return ((::BCMJNECADGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYTIMESENTRY___BASE_CREATEREALTIMEQTETASK_OFFSET))(this);
		}
	};
}
