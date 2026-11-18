#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBaseWithFocus.h"
#include "unitysdk/MoleMole/UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType.h"
#include "unitysdk/UnityEngine/Color.h"

class BCICGJEKFEF;
namespace MoleMole { class GradientColor; }
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController; }
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController_Context; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVDROP_DOBIND_OFFSET UNITYSDK_OFFSET(0x17978A10)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVDROP_GET_STRATEGYTYPE_OFFSET UNITYSDK_OFFSET(0x17978A00)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVDROP_SETUPGRADIENTCOLOR_OFFSET UNITYSDK_OFFSET(0x17978F00)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVDROP__CCTOR_OFFSET UNITYSDK_OFFSET(0x179791B0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVDROP__CTOR_OFFSET UNITYSDK_OFFSET(0x179791A0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVDROP___BASE_DOBIND_OFFSET UNITYSDK_OFFSET(0x17979380)

namespace MoleMole
{
	inline static constexpr unsigned int UIMultiInteractionTargetListItemWidgetController_DisplayStrategyZenkovDrop_TypeDefinitionIndex = 79998;

	class UIMultiInteractionTargetListItemWidgetController_DisplayStrategyZenkovDrop : public ::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBaseWithFocus
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Color>** StaticGet__colorTop()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIMultiInteractionTargetListItemWidgetController_DisplayStrategyZenkovDrop_TypeDefinitionIndex)->GetStaticField(0x51930);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Color>** StaticGet__colorBottom()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(UIMultiInteractionTargetListItemWidgetController_DisplayStrategyZenkovDrop_TypeDefinitionIndex)->GetStaticField(0x51938);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVDROP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVDROP__CCTOR_OFFSET))();
		}

		::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType get_StrategyType()
		{
			return ((::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVDROP_GET_STRATEGYTYPE_OFFSET))(this);
		}

		::System::Void DoBind(::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*& context, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*& controller, ::BCICGJEKFEF*& view)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*&, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*&, ::BCICGJEKFEF*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVDROP_DOBIND_OFFSET))(this, context, controller, view);
		}

		static ::System::Void SetupGradientColor(::MoleMole::GradientColor* color, ::System::Int32 rarity)
		{
			return ((::System::Void(*)(::MoleMole::GradientColor*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVDROP_SETUPGRADIENTCOLOR_OFFSET))(color, rarity);
		}

		::System::Void __base_DoBind(::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*& P0, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*& P1, ::BCICGJEKFEF*& P2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*&, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*&, ::BCICGJEKFEF*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVDROP___BASE_DOBIND_OFFSET))(this, P0, P1, P2);
		}
	};
}
