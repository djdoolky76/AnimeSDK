#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BPHGNMNLLHF;

#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0EEFF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenPageControllerContext_TypeDefinitionIndex = 90105;

	class UIAvatarSpecialAwakenPageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BPHGNMNLLHF* AvatarData; // 0x28
		::System::Boolean CanOperateAwake; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
