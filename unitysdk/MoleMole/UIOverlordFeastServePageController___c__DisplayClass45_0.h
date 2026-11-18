#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCIAMHMOLOF;

#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC7F40)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS45_0__GETDISHITEMCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x18EC7F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastServePageController___c__DisplayClass45_0_TypeDefinitionIndex = 66422;

	class UIOverlordFeastServePageController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDishItemContext_b__0(::OCIAMHMOLOF* dishItemContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCIAMHMOLOF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS45_0__GETDISHITEMCONTEXT_B__0_OFFSET))(this, dishItemContext);
		}
	};
}
