#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COEFOHIKDFN;

#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C73730)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS25_0__REFRESHORIGINALBADGETYPELIST_B__0_OFFSET UNITYSDK_OFFSET(0x18C73740)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemCollectPageController___c__DisplayClass25_0_TypeDefinitionIndex = 88076;

	class UIHollowCardItemCollectPageController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Int32 typeID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshOriginalBadgeTypeList_b__0(::COEFOHIKDFN* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::COEFOHIKDFN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS25_0__REFRESHORIGINALBADGETYPELIST_B__0_OFFSET))(this, x);
		}
	};
}
