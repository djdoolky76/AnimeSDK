#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

class KOIDMLPJGML;

#define MOLEMOLE_UIBABELTOWERREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19925820)
#define MOLEMOLE_UIBABELTOWERREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__REFRESHREWARDINFO_B__0_OFFSET UNITYSDK_OFFSET(0x19925830)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabelTowerRewardCompRowWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 75432;

	class UIBabelTowerRewardCompRowWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Boolean isReceived; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::KOIDMLPJGML* _RefreshRewardInfo_b__0(::DEDDPKGLKHI_LODLFMBCLAH x)
		{
			return ((::KOIDMLPJGML*(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__REFRESHREWARDINFO_B__0_OFFSET))(this, x);
		}
	};
}
