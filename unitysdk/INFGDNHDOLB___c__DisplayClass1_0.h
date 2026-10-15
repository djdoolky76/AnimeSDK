#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAHKKMIFGGB.h"
#include "unitysdk/System/Object.h"
class HBIAKFCLCIG;

#define INFGDNHDOLB___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x164EB790)
#define INFGDNHDOLB___C__DISPLAYCLASS1_0___GETCOMPAREGROUP_B__0_OFFSET UNITYSDK_OFFSET(0x164EBA40)

	class INFGDNHDOLB___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::CAHKKMIFGGB context; // 0x10
		::System::UInt32 roleID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFGDNHDOLB___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetCompareGroup_b__0(::HBIAKFCLCIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBIAKFCLCIG*))((::PBYTE)hIl2Cpp + INFGDNHDOLB___C__DISPLAYCLASS1_0___GETCOMPAREGROUP_B__0_OFFSET))(this, a1);
		}

	};
