#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCKHOGBDJHK;
namespace MoleMole { class UIZenkovCollectPageController; }

#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12C093B0)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHPROGRESSPOINTS_B__0_OFFSET UNITYSDK_OFFSET(0x12C093C0)
#define MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHPROGRESSPOINTS_B__2_OFFSET UNITYSDK_OFFSET(0x12C093F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovCollectPageController___c__DisplayClass12_0_TypeDefinitionIndex = 77493;

	class UIZenkovCollectPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovCollectPageController* __4__this; // 0x10
		::System::Int32 tabId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshProgressPoints_b__0(::GCKHOGBDJHK* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::GCKHOGBDJHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHPROGRESSPOINTS_B__0_OFFSET))(this, x);
		}

		::System::Void _RefreshProgressPoints_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHPROGRESSPOINTS_B__2_OFFSET))(this);
		}
	};
}
