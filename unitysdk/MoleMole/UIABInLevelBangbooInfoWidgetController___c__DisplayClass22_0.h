#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AHCODLNCFGF;
template <typename T> class KLIOMMIOFDC_1;
template <typename T> class KNLFLMMHALL_1;

#define MOLEMOLE_UIABINLEVELBANGBOOINFOWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1087B0)
#define MOLEMOLE_UIABINLEVELBANGBOOINFOWIDGETCONTROLLER___C__DISPLAYCLASS22_0__REFRESHPROPERTY_B__1_OFFSET UNITYSDK_OFFSET(0x1A109400)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelBangbooInfoWidgetController___c__DisplayClass22_0_TypeDefinitionIndex = 42793;

	class UIABInLevelBangbooInfoWidgetController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::AHCODLNCFGF* cfg; // 0x10
		::KNLFLMMHALL_1<::System::Object*>* item; // 0x18
		::KLIOMMIOFDC_1<::System::Int32>* val; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELBANGBOOINFOWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshProperty_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELBANGBOOINFOWIDGETCONTROLLER___C__DISPLAYCLASS22_0__REFRESHPROPERTY_B__1_OFFSET))(this);
		}
	};
}
