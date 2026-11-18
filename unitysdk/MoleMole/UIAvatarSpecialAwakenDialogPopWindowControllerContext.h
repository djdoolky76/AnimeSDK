#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BPHGNMNLLHF;

#define MOLEMOLE_UIAVATARSPECIALAWAKENDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18872710)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenDialogPopWindowControllerContext_TypeDefinitionIndex = 88688;

	class UIAvatarSpecialAwakenDialogPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BPHGNMNLLHF* AvatarData; // 0x28
		::System::Boolean CanOperateAwake; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 AvatarAwakenID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
