#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EPAPNDIDBOK;
class JIFOIGOOCII;

#define MOLEMOLE_UISHARETEAMMEMBERSLOTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16902990)

namespace MoleMole
{
	inline static constexpr unsigned int UIShareTeamMemberSlotWidgetController_Context_TypeDefinitionIndex = 79461;

	class UIShareTeamMemberSlotWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JIFOIGOOCII* Buddy; // 0x28
		::EPAPNDIDBOK* Avatar; // 0x30
		::System::Boolean IsAvatar; // 0x38
		::System::Boolean IsEmpty; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHARETEAMMEMBERSLOTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
