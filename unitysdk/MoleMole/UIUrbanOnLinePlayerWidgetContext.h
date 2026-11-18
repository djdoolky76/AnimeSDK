#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGOHCKHPJBN.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIURBANONLINEPLAYERWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x171953D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanOnLinePlayerWidgetContext_TypeDefinitionIndex = 49805;

	class UIUrbanOnLinePlayerWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 EntityId; // 0x28
		::System::Int32 BuddyIndex; // 0x2C
		::System::Boolean isLocalPlayer; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 TeamIdx; // 0x34
		::LGOHCKHPJBN ConvertData; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANONLINEPLAYERWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
