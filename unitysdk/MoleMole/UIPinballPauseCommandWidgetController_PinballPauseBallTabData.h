#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPinballPauseCommandWidgetController_BallShowType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIPINBALLPAUSECOMMANDWIDGETCONTROLLER_PINBALLPAUSEBALLTABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1798C1A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballPauseCommandWidgetController_PinballPauseBallTabData_TypeDefinitionIndex = 83162;

	class UIPinballPauseCommandWidgetController_PinballPauseBallTabData : public ::System::Object
	{
	public:
		::System::Int32 BallId; // 0x10
		::MoleMole::UIPinballPauseCommandWidgetController_BallShowType ShowType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLPAUSECOMMANDWIDGETCONTROLLER_PINBALLPAUSEBALLTABDATA__CTOR_OFFSET))(this);
		}
	};
}
