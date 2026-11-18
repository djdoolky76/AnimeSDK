#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;

#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS87_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15C55C10)
#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS87_0__SELECTEQUIPFORCONSOLE_B__0_OFFSET UNITYSDK_OFFSET(0x15C55C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleDialogPopWindowController___c__DisplayClass87_0_TypeDefinitionIndex = 42932;

	class UIRecycleDialogPopWindowController___c__DisplayClass87_0 : public ::System::Object
	{
	public:
		::System::UInt64 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS87_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SelectEquipForConsole_b__0(::HGAJKHIMKJP* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS87_0__SELECTEQUIPFORCONSOLE_B__0_OFFSET))(this, x);
		}
	};
}
