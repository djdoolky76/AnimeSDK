#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CHECKWARMUPINTEGRITY_B__0_OFFSET UNITYSDK_OFFSET(0x16780D10)
#define MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CHECKWARMUPINTEGRITY_B__1_OFFSET UNITYSDK_OFFSET(0x16780D20)
#define MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CHECKWARMUPINTEGRITY_B__2_OFFSET UNITYSDK_OFFSET(0x16780D80)
#define MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16780D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIResourceLoadWidgetController___c__DisplayClass36_0_TypeDefinitionIndex = 92607;

	class UIResourceLoadWidgetController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::Nullable_1<::System::Boolean> shouldWarmup; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckWarmupIntegrity_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CHECKWARMUPINTEGRITY_B__0_OFFSET))(this);
		}

		::System::Void _CheckWarmupIntegrity_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CHECKWARMUPINTEGRITY_B__1_OFFSET))(this);
		}

		::System::Boolean _CheckWarmupIntegrity_b__2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CHECKWARMUPINTEGRITY_B__2_OFFSET))(this);
		}
	};
}
