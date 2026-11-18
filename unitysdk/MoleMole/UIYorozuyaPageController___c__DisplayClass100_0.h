#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOJEBJFPBAC;
class MEKACGJBPGE;

#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS100_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14E49910)
#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS100_0__NEEDMONSTERINFOBTN_B__0_OFFSET UNITYSDK_OFFSET(0x14E49920)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaPageController___c__DisplayClass100_0_TypeDefinitionIndex = 42091;

	class UIYorozuyaPageController___c__DisplayClass100_0 : public ::System::Object
	{
	public:
		::MEKACGJBPGE* cfg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS100_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _NeedMonsterInfoBtn_b__0(::KOJEBJFPBAC* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOJEBJFPBAC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS100_0__NEEDMONSTERINFOBTN_B__0_OFFSET))(this, x);
		}
	};
}
