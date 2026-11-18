#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AJHHKILCAEO;
class FBHPDPBIGPK;

#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2299F0)
#define MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS71_0__REFRESHFRIENDLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1A229A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPPageController___c__DisplayClass71_0_TypeDefinitionIndex = 62971;

	class UIAutoBattlePVPPageController___c__DisplayClass71_0 : public ::System::Object
	{
	public:
		::AJHHKILCAEO* player; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshFriendList_b__0(::FBHPDPBIGPK* friend_)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBHPDPBIGPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPPAGECONTROLLER___C__DISPLAYCLASS71_0__REFRESHFRIENDLIST_B__0_OFFSET))(this, friend_);
		}
	};
}
