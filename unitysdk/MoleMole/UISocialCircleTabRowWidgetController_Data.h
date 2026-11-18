#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IDGDIFDMIDP;

#define MOLEMOLE_UISOCIALCIRCLETABROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA7180)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleTabRowWidgetController_Data_TypeDefinitionIndex = 55698;

	class UISocialCircleTabRowWidgetController_Data : public ::System::Object
	{
	public:
		::IDGDIFDMIDP* SocialCircleDataExt; // 0x10
		::System::Boolean DisableInteractionWhenEmpty; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLETABROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
