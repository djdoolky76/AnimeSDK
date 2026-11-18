#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMCCPINHAGM;
namespace MoleMole { class UIWeaponLockDialogPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12F91A70)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__EXECUTESMARTLOCKUNLOCK_B__0_OFFSET UNITYSDK_OFFSET(0x12F91A80)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__EXECUTESMARTLOCKUNLOCK_B__1_OFFSET UNITYSDK_OFFSET(0x12F91AB0)
#define MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__EXECUTESMARTLOCKUNLOCK_B__2_OFFSET UNITYSDK_OFFSET(0x12F91AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWeaponLockDialogPopWindowController___c__DisplayClass33_0_TypeDefinitionIndex = 82828;

	class UIWeaponLockDialogPopWindowController___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::MoleMole::UIWeaponLockDialogPopWindowController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::DMCCPINHAGM*>* allARankWeapons; // 0x18
		::System::Int32 pendingOps; // 0x20
		::System::Boolean hasLock; // 0x24
		::System::Byte _padding0[0x3];
		::System::Int32 completedOps; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ExecuteSmartLockUnlock_b__0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__EXECUTESMARTLOCKUNLOCK_B__0_OFFSET))(this, id);
		}

		::System::Boolean _ExecuteSmartLockUnlock_b__1(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__EXECUTESMARTLOCKUNLOCK_B__1_OFFSET))(this, id);
		}

		::System::Void _ExecuteSmartLockUnlock_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONLOCKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__EXECUTESMARTLOCKUNLOCK_B__2_OFFSET))(this);
		}
	};
}
