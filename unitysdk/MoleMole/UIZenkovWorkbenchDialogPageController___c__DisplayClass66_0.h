#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AMNLLBDFNFE.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS66_0__APPLYCACHEDORDER_B__0_OFFSET UNITYSDK_OFFSET(0x13C085B0)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13C085A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWorkbenchDialogPageController___c__DisplayClass66_0_TypeDefinitionIndex = 78526;

	class UIZenkovWorkbenchDialogPageController___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* indexMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ApplyCachedOrder_b__0(::AMNLLBDFNFE a, ::AMNLLBDFNFE b)
		{
			return ((::System::Int32(*)(::PVOID, ::AMNLLBDFNFE, ::AMNLLBDFNFE))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS66_0__APPLYCACHEDORDER_B__0_OFFSET))(this, a, b);
		}
	};
}
