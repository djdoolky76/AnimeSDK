#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BPHGNMNLLHF;

#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15946A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenContrastDialogPopWindowControllerContext_TypeDefinitionIndex = 43433;

	class UIAvatarSpecialAwakenContrastDialogPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BPHGNMNLLHF* AvatarData; // 0x28
		::System::Int32 AvatarAwakenID; // 0x30
		::System::Int32 AvatarAwakenDesItemIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
