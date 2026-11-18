#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJPEEJFNCHL;

#define MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE542D50)
#define MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS72_0__LOADMEDALPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0xE542D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSeasonResultPopWindowController___c__DisplayClass72_0_TypeDefinitionIndex = 49156;

	class UIZenkovSeasonResultPopWindowController___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::System::Int32 medalGroupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _LoadMedalPrefab_b__0(::DJPEEJFNCHL* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS72_0__LOADMEDALPREFAB_B__0_OFFSET))(this, x);
		}
	};
}
