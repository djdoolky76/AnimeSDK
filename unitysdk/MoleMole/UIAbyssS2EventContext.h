#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIABYSSS2EVENTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0FB840)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EventContext_TypeDefinitionIndex = 64769;

	class UIAbyssS2EventContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 QuestID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
