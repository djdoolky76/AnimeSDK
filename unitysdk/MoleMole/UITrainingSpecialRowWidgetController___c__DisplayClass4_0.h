#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AHIKNHGPAMH;
class ALDOKCCIFNB;

#define MOLEMOLE_UITRAININGSPECIALROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164CB990)
#define MOLEMOLE_UITRAININGSPECIALROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ENTERSPECIALTRAINING_B__1_OFFSET UNITYSDK_OFFSET(0x164CB9A0)

namespace MoleMole
{
	inline static constexpr unsigned int UITrainingSpecialRowWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 54291;

	class UITrainingSpecialRowWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::AHIKNHGPAMH* config; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGSPECIALROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterSpecialTraining_b__1(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGSPECIALROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ENTERSPECIALTRAINING_B__1_OFFSET))(this, data);
		}
	};
}
