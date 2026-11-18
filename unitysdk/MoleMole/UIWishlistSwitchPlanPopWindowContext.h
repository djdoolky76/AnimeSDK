#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIWISHLISTSWITCHPLANPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13E7DF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistSwitchPlanPopWindowContext_TypeDefinitionIndex = 56140;

	class UIWishlistSwitchPlanPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 AvatarId; // 0x28
		::System::Int32 SwitchType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTSWITCHPLANPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
