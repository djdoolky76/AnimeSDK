#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INOEOEPKMJL.h"
#include "unitysdk/MoleMole/UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBaseWithFocus.h"
#include "unitysdk/MoleMole/UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType.h"
#include "unitysdk/MNAGAGOHIGH.h"

class BCICGJEKFEF;
class DMHOLJNNCJA_PJJIMDAOJCJ;
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController; }
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController_Context; }

#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_DOBIND_OFFSET UNITYSDK_OFFSET(0x18404B10)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_DOUNBIND_OFFSET UNITYSDK_OFFSET(0x18405440)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_GET_STRATEGYTYPE_OFFSET UNITYSDK_OFFSET(0x18404B00)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_ONALREADYSEARCHSLOTNUMCHANGED_OFFSET UNITYSDK_OFFSET(0x184054A0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x184056C0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER___BASE_DOBIND_OFFSET UNITYSDK_OFFSET(0x184056D0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER___BASE_DOUNBIND_OFFSET UNITYSDK_OFFSET(0x184056E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMultiInteractionTargetListItemWidgetController_DisplayStrategyZenkovContainer_TypeDefinitionIndex = 80003;

	class UIMultiInteractionTargetListItemWidgetController_DisplayStrategyZenkovContainer : public ::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBaseWithFocus
	{
	public:
		::INOEOEPKMJL _alreadySearchSlotNumSubscription; // 0x50
		::DMHOLJNNCJA_PJJIMDAOJCJ* _bagData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType get_StrategyType()
		{
			return ((::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_GET_STRATEGYTYPE_OFFSET))(this);
		}

		::System::Void DoBind(::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*& context, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*& controller, ::BCICGJEKFEF*& view)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*&, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*&, ::BCICGJEKFEF*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_DOBIND_OFFSET))(this, context, controller, view);
		}

		::System::Void DoUnbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_DOUNBIND_OFFSET))(this);
		}

		::System::Void OnAlreadySearchSlotNumChanged(::MNAGAGOHIGH& e)
		{
			return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_ONALREADYSEARCHSLOTNUMCHANGED_OFFSET))(this, e);
		}

		::System::Void __base_DoBind(::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*& P0, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*& P1, ::BCICGJEKFEF*& P2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*&, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*&, ::BCICGJEKFEF*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER___BASE_DOBIND_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_DoUnbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER___BASE_DOUNBIND_OFFSET))(this);
		}
	};
}
