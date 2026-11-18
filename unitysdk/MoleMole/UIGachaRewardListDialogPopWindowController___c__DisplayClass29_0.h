#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
class DOJFNBKAOMN;

#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1836F4C0)
#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS29_0__REFRESHAVATARITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x1836F4D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaRewardListDialogPopWindowController___c__DisplayClass29_0_TypeDefinitionIndex = 39497;

	class UIGachaRewardListDialogPopWindowController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::DOJFNBKAOMN* reward; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshAvatarItems_b__0(::BPHGNMNLLHF* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS29_0__REFRESHAVATARITEMS_B__0_OFFSET))(this, x);
		}
	};
}
