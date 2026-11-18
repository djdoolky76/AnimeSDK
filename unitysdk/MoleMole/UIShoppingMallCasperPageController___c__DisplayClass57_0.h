#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CCPCAPILDDK;

#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1889F0E0)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS57_0__FINDTABDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1889F0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallCasperPageController___c__DisplayClass57_0_TypeDefinitionIndex = 60510;

	class UIShoppingMallCasperPageController___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::System::Int32 shopTabID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindTabData_b__0(::CCPCAPILDDK* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCPCAPILDDK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS57_0__FINDTABDATA_B__0_OFFSET))(this, x);
		}
	};
}
