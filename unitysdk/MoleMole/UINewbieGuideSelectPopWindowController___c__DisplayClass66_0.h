#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LBCPMIJEKOI;
class OAEFGCLEHHO;
namespace MoleMole { class UINewbieGuideSelectPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D5A910)
#define MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__DOFETCHREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x17D5F8E0)
#define MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__DOFETCHREQUEST_B__1_OFFSET UNITYSDK_OFFSET(0x17D5FD10)
#define MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__DOFETCHREQUEST_B__2_OFFSET UNITYSDK_OFFSET(0x17D5FC10)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideSelectPopWindowController___c__DisplayClass66_0_TypeDefinitionIndex = 61162;

	class UINewbieGuideSelectPopWindowController___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::MoleMole::UINewbieGuideSelectPopWindowController* __4__this; // 0x10
		::System::Action* __9__2; // 0x18
		::System::Int32 itemId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoFetchRequest_b__0(::LBCPMIJEKOI* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::LBCPMIJEKOI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__DOFETCHREQUEST_B__0_OFFSET))(this, rsp);
		}

		::System::Void _DoFetchRequest_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__DOFETCHREQUEST_B__2_OFFSET))(this);
		}

		::System::Void _DoFetchRequest_b__1(::OAEFGCLEHHO* error)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS66_0__DOFETCHREQUEST_B__1_OFFSET))(this, error);
		}
	};
}
