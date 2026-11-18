#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ButtonQTETaskEntryBase.h"
#include "unitysdk/MoleMole/RealtimeQTEProgressBarUIWidgetType.h"
#include "unitysdk/MoleMole/RealtimeQTETaskUIProgressBarPositionType.h"

class BCMJNECADGK;

#define MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYPROGRESSENTRY_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x11E82B00)
#define MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYPROGRESSENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x11E82C60)
#define MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYPROGRESSENTRY___BASE_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x11E82CE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ButtonQTETaskMultiPressByProgressEntry_TypeDefinitionIndex = 54571;

	class ButtonQTETaskMultiPressByProgressEntry : public ::MoleMole::Config::ButtonQTETaskEntryBase
	{
	public:
		::System::Single MaxProgress; // 0xA8
		::System::Single InitialProgress; // 0xAC
		::System::Single AutoProgressDecrease; // 0xB0
		::System::Single ProgressIncreaseOnPress; // 0xB4
		::System::Single PressIntervalTimeThreshold; // 0xB8
		::System::Boolean EmptyProgressFail; // 0xBC
		::System::Byte _padding0[0x3];
		::MoleMole::RealtimeQTEProgressBarUIWidgetType ProgressBarUIWidgetType; // 0xC0
		::MoleMole::RealtimeQTETaskUIProgressBarPositionType UIProgressBarPositionType; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYPROGRESSENTRY__CTOR_OFFSET))(this);
		}

		::BCMJNECADGK* CreateRealtimeQTETask()
		{
			return ((::BCMJNECADGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYPROGRESSENTRY_CREATEREALTIMEQTETASK_OFFSET))(this);
		}

		::BCMJNECADGK* __base_CreateRealtimeQTETask()
		{
			return ((::BCMJNECADGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYPROGRESSENTRY___BASE_CREATEREALTIMEQTETASK_OFFSET))(this);
		}
	};
}
