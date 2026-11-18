#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF3E80)
#define MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS43_0__GETAUTOTSELECTTARGET_B__1_OFFSET UNITYSDK_OFFSET(0x1AFF3E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIExpeditionBuddySelectPopWindowController___c__DisplayClass43_0_TypeDefinitionIndex = 58362;

	class UIExpeditionBuddySelectPopWindowController___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CKENOHMEEGI*>* sortedBuddies; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAutotSelectTarget_b__1(::CKENOHMEEGI* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONBUDDYSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS43_0__GETAUTOTSELECTTARGET_B__1_OFFSET))(this, match);
		}
	};
}
