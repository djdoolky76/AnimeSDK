#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class PGJMHLNBKKI;

#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS88_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F9170)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS88_0__REFRESHFRIENDLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1A3F9180)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventurePageController___c__DisplayClass88_0_TypeDefinitionIndex = 49340;

	class UIGrandMarcelAdventurePageController___c__DisplayClass88_0 : public ::System::Object
	{
	public:
		::PGJMHLNBKKI* player; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS88_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshFriendList_b__0(::FBHPDPBIGPK* friend_)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBHPDPBIGPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS88_0__REFRESHFRIENDLIST_B__0_OFFSET))(this, friend_);
		}
	};
}
