#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFNDABIHAMO;

#define MOLEMOLE_UIPINBALLCHALLENGEPREPAREROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x168D75A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballChallengePrepareRowWidgetController_Data_TypeDefinitionIndex = 74614;

	class UIPinballChallengePrepareRowWidgetController_Data : public ::System::Object
	{
	public:
		::KFNDABIHAMO* LevelData; // 0x10
		::System::Int32 Index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLCHALLENGEPREPAREROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
