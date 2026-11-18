#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS166_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1796BA40)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS166_0__FORCEFADEOUTRECOMMENDTIP_B__0_OFFSET UNITYSDK_OFFSET(0x1796BA50)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS166_0__FORCEFADEOUTRECOMMENDTIP_B__1_OFFSET UNITYSDK_OFFSET(0x1796BB60)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass166_0_TypeDefinitionIndex = 77623;

	class UIMissionTipsContainerWidgetController___c__DisplayClass166_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x18
		::MoleMole::UIMissionTipsRowMultiWidgetController* trackWidget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS166_0__CTOR_OFFSET))(this);
		}

		::System::Void _ForceFadeoutRecommendTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS166_0__FORCEFADEOUTRECOMMENDTIP_B__0_OFFSET))(this);
		}

		::System::Void _ForceFadeoutRecommendTip_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS166_0__FORCEFADEOUTRECOMMENDTIP_B__1_OFFSET))(this);
		}
	};
}
