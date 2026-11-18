#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIOnlineChatTipsContainerWidgetController_OnlineChatOperateDataModify_EType.h"
#include "unitysdk/System/ValueType.h"

class NFJGPOLPIEO;

namespace MoleMole
{
	inline static constexpr unsigned int UIOnlineChatTipsContainerWidgetController_OnlineChatOperateDataModify_TypeDefinitionIndex = 41575;

	struct alignas(8) UIOnlineChatTipsContainerWidgetController_OnlineChatOperateDataModify
	{
		::MoleMole::UIOnlineChatTipsContainerWidgetController_OnlineChatOperateDataModify_EType Type; // 0x10
		::System::Byte _padding0[0x4];
		::NFJGPOLPIEO* Data; // 0x18
	};
}
