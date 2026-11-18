#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164AED20)
#define MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS46_0__PLAYANIMATIONTASK_B__0_OFFSET UNITYSDK_OFFSET(0x164AED30)
#define MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS46_0__PLAYANIMATIONTASK_B__1_OFFSET UNITYSDK_OFFSET(0x164AED70)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBangbooSelectDialogPopWindowController___c__DisplayClass46_0_TypeDefinitionIndex = 60842;

	class UISuibianTempleBangbooSelectDialogPopWindowController___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken token; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Boolean>* completionSource; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAnimationTask_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS46_0__PLAYANIMATIONTASK_B__0_OFFSET))(this);
		}

		::System::Void _PlayAnimationTask_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS46_0__PLAYANIMATIONTASK_B__1_OFFSET))(this);
		}
	};
}
