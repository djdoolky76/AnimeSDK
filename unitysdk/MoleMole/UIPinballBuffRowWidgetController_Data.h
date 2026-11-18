#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IGAONHGMLLA_GHADLBFMNFK.h"

#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x186EE400)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballBuffRowWidgetController_Data_TypeDefinitionIndex = 85282;

	class UIPinballBuffRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 BallId; // 0x10
		::System::Int32 AppliedCount; // 0x14

		::System::Void _ctor(::IGAONHGMLLA_GHADLBFMNFK snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::IGAONHGMLLA_GHADLBFMNFK))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this, snapshot);
		}
	};
}
