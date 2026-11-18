#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DFBKEIBIDFJ;
namespace MoleMole { class UIActivityReturnPageController; }

#define MOLEMOLE_UIBACKFLOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A148330)

namespace MoleMole
{
	inline static constexpr unsigned int UIBackFlowContext_TypeDefinitionIndex = 84051;

	class UIBackFlowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::DFBKEIBIDFJ* backFlowActivityData; // 0x28
		::MoleMole::UIActivityReturnPageController* parentController; // 0x30
		::System::Int32 DefaultSelectRoleIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBACKFLOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
