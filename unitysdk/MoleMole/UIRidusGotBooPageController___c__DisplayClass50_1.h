#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIRidusGotBooPageController_KeyPosition.h"
#include "unitysdk/System/Object.h"

class DNDMJGGEAFB;

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1649B4E0)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_1__UPDATEFEVERSCORE_B__1_OFFSET UNITYSDK_OFFSET(0x1649B4F0)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_1__UPDATEFEVERSCORE_B__2_OFFSET UNITYSDK_OFFSET(0x1649B520)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController___c__DisplayClass50_1_TypeDefinitionIndex = 45848;

	template <typename T>
	class UIRidusGotBooPageController___c__DisplayClass50_1 : public ::System::Object
	{
	public:
		::DNDMJGGEAFB* keyPress; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateFeverScore_b__1(::DNDMJGGEAFB* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNDMJGGEAFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_1__UPDATEFEVERSCORE_B__1_OFFSET))(this, x);
		}

		::System::Boolean _UpdateFeverScore_b__2(::MoleMole::UIRidusGotBooPageController_KeyPosition x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIRidusGotBooPageController_KeyPosition))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_1__UPDATEFEVERSCORE_B__2_OFFSET))(this, x);
		}
	};
}
