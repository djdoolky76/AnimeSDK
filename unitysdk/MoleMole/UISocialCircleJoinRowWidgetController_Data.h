#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNDAGBIIPI.h"
#include "unitysdk/System/Object.h"

class NHCBIIMKLBK;

#define MOLEMOLE_UISOCIALCIRCLEJOINROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x167C86B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleJoinRowWidgetController_Data_TypeDefinitionIndex = 59989;

	class UISocialCircleJoinRowWidgetController_Data : public ::System::Object
	{
	public:
		::NHCBIIMKLBK* SocialCircleData; // 0x10
		::EFNDAGBIIPI JoinRowMode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEJOINROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
