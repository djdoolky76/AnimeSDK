#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOAHNKGLKKG;

#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x188FBA90)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__DISPLAYCLASS12_0___UPDATEZONES_B__0_OFFSET UNITYSDK_OFFSET(0x188FBAA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBattlePortal_HadalZonePageController___c__DisplayClass12_0_TypeDefinitionIndex = 78733;

	class UIBattlePortal_HadalZonePageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::UInt32 maxLayerIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateZones_b__0(::NOAHNKGLKKG* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOAHNKGLKKG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__DISPLAYCLASS12_0___UPDATEZONES_B__0_OFFSET))(this, t);
		}
	};
}
