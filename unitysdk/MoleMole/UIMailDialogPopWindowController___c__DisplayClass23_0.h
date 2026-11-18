#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AAEKBENGCBO;
namespace MoleMole { class UIMailDialogPopWindowController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x186BD8D0)
#define MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYGETMAILAWARD_B__0_OFFSET UNITYSDK_OFFSET(0x186BD8E0)
#define MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYGETMAILAWARD_B__2_OFFSET UNITYSDK_OFFSET(0x186BDED0)
#define MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYGETMAILAWARD_G__TRYADDMAILTOGETAWARDLIST_1_OFFSET UNITYSDK_OFFSET(0x186BDEF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMailDialogPopWindowController___c__DisplayClass23_0_TypeDefinitionIndex = 65188;

	class UIMailDialogPopWindowController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::MoleMole::UIMailDialogPopWindowController* __4__this; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* tempDict; // 0x20
		::System::Collections::Generic::List_1<::AAEKBENGCBO*>* getAwardList; // 0x28
		::System::Boolean showOverflowHint; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryGetMailAward_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYGETMAILAWARD_B__0_OFFSET))(this);
		}

		::System::Void _TryGetMailAward_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYGETMAILAWARD_B__2_OFFSET))(this);
		}

		::System::Void _TryGetMailAward_g__TryAddMailToGetAwardList_1(::AAEKBENGCBO* mail)
		{
			return ((::System::Void(*)(::PVOID, ::AAEKBENGCBO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYGETMAILAWARD_G__TRYADDMAILTOGETAWARDLIST_1_OFFSET))(this, mail);
		}
	};
}
