#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCOAGGHCODK;

#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA1400)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__SETDATA_B__0_OFFSET UNITYSDK_OFFSET(0x18EA1410)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeDialogPopWindowController___c__DisplayClass24_0_TypeDefinitionIndex = 79744;

	class UIMindscapeDialogPopWindowController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Int32 talentSlot; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetData_b__0(::KCOAGGHCODK* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCOAGGHCODK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__SETDATA_B__0_OFFSET))(this, o);
		}
	};
}
