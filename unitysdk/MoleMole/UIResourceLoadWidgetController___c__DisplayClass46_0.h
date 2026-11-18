#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16780D90)
#define MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS46_0__ONSTARTLOADGAMECONFIGASSETS_B__0_OFFSET UNITYSDK_OFFSET(0x16780DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIResourceLoadWidgetController___c__DisplayClass46_0_TypeDefinitionIndex = 92609;

	class UIResourceLoadWidgetController___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::Boolean hasIntegrityCheck; // 0x10
		::System::Boolean shouldWarmupByIntegrityCheck; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnStartLoadGameConfigAssets_b__0(::System::Boolean needCheck, ::System::Boolean shouldWarmup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRESOURCELOADWIDGETCONTROLLER___C__DISPLAYCLASS46_0__ONSTARTLOADGAMECONFIGASSETS_B__0_OFFSET))(this, needCheck, shouldWarmup);
		}
	};
}
