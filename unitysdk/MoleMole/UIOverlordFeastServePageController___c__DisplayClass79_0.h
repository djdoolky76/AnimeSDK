#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCIAMHMOLOF;
namespace MoleMole { class UIOverlordFeastServePageController; }

#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167658C0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS79_0__ISGUESTHAVESPECIFICDISHID_B__0_OFFSET UNITYSDK_OFFSET(0x167658D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastServePageController___c__DisplayClass79_0_TypeDefinitionIndex = 66417;

	class UIOverlordFeastServePageController___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::MoleMole::UIOverlordFeastServePageController* __4__this; // 0x10
		::System::Int32 guestId; // 0x18
		::System::Int32 specificDishID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsGuestHaveSpecificDishID_b__0(::OCIAMHMOLOF* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCIAMHMOLOF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS79_0__ISGUESTHAVESPECIFICDISHID_B__0_OFFSET))(this, context);
		}
	};
}
