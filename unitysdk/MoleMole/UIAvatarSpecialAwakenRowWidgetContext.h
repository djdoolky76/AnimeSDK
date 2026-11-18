#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BPHGNMNLLHF;

#define MOLEMOLE_UIAVATARSPECIALAWAKENROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9CFB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenRowWidgetContext_TypeDefinitionIndex = 63131;

	class UIAvatarSpecialAwakenRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BPHGNMNLLHF* AvatarData; // 0x28
		::System::Int32 AvatarID; // 0x30
		::System::Int32 AvatarAwakenDesItemIndex; // 0x34
		::System::Int32 AvatarAwakenID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
