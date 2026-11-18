#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1560D270)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS28_0__GETSHOPTABGROUPINDEXBYSHOPTABID_B__0_OFFSET UNITYSDK_OFFSET(0x1560D280)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallCasperPageController___c__DisplayClass28_0_TypeDefinitionIndex = 60500;

	class UIShoppingMallCasperPageController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::Int32 tabGroupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShopTabGroupIndexByShopTabID_b__0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS28_0__GETSHOPTABGROUPINDEXBYSHOPTABID_B__0_OFFSET))(this, x);
		}
	};
}
