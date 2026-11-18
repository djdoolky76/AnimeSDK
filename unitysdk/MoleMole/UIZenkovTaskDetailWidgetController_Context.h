#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KFPKNGNFJNO;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE542DD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTaskDetailWidgetController_Context_TypeDefinitionIndex = 92939;

	class UIZenkovTaskDetailWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KFPKNGNFJNO* QuestData; // 0x28
		::System::Action_1<::System::Int32>* AfterTrackTaskRefresh; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
