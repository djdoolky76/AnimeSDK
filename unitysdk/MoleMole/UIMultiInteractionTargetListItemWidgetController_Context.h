#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BLCIDFMMHIL;
class BLEAFDPLLMF;
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase; }
template <typename T> class JIOLFCAGOFH_1;

#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15D1ABB0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x15D1AB20)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15D1ACB0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_RESET_OFFSET UNITYSDK_OFFSET(0x15D1AAD0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D1AD20)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x15D1AD30)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15D1AD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIMultiInteractionTargetListItemWidgetController_Context_TypeDefinitionIndex = 79995;

	class UIMultiInteractionTargetListItemWidgetController_Context : public ::System::Object
	{
	public:
		::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase* DisplayStrategy; // 0x10
		::BLCIDFMMHIL* BoundInteraction; // 0x18
		::JIOLFCAGOFH_1<::BLCIDFMMHIL*>* FocusedInteraction; // 0x20
		::BLEAFDPLLMF* EventListener; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_RESET_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
