#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODLBEJANMEG;

#define MOLEMOLE_UINEWBIEGUIDEGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x168CFA40)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideGetRowWidgetController_Data_TypeDefinitionIndex = 56462;

	class UINewbieGuideGetRowWidgetController_Data : public ::System::Object
	{
	public:
		::ODLBEJANMEG* AccessData; // 0x10
		::System::Boolean IsLast; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEGETROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
