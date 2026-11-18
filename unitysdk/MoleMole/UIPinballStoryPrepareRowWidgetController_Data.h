#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFNDABIHAMO;

#define MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14CB7C50)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballStoryPrepareRowWidgetController_Data_TypeDefinitionIndex = 69130;

	class UIPinballStoryPrepareRowWidgetController_Data : public ::System::Object
	{
	public:
		::KFNDABIHAMO* LevelData; // 0x10
		::System::Int32 Index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSTORYPREPAREROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
