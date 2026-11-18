#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;
namespace MoleMole { class UIPartnerDatePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19065700)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__0_OFFSET UNITYSDK_OFFSET(0x19065C10)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__1_OFFSET UNITYSDK_OFFSET(0x19065710)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__2_OFFSET UNITYSDK_OFFSET(0x19065B50)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__3_OFFSET UNITYSDK_OFFSET(0x19065CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDatePageController___c__DisplayClass22_0_TypeDefinitionIndex = 71280;

	class UIPartnerDatePageController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPartnerDatePageController* __4__this; // 0x10
		::System::Action* __9__3; // 0x18
		::IANDOOLAALI_DLAAJNDJPLO* __9__2; // 0x20
		::System::Int32 partnerID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnConfirmSelect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__1_OFFSET))(this);
		}

		::System::Void _OnConfirmSelect_b__2(::OAEFGCLEHHO* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__2_OFFSET))(this, rsp);
		}

		::System::Void _OnConfirmSelect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__0_OFFSET))(this);
		}

		::System::Void _OnConfirmSelect_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__3_OFFSET))(this);
		}
	};
}
