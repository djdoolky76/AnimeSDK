#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CHALNAEKBPO;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10574E70)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovGemDebuffWidgetController_Context_TypeDefinitionIndex = 63549;

	class UIZenkovGemDebuffWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_3<::System::UInt32, ::System::Int32, ::CHALNAEKBPO*>* OnItemClick; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
