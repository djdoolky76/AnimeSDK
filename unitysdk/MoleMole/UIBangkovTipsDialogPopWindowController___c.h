#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/UIBangkovTipsDialogPopWindowController_ItemInfo.h"

class FMHDMLBDIJC;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A24D210)
#define MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A24D250)
#define MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__ONCLICKOKBTN_B__32_0_OFFSET UNITYSDK_OFFSET(0x1A24D270)
#define MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__ONCLICKOKBTN_B__32_1_OFFSET UNITYSDK_OFFSET(0x1A24D280)
#define MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__OPENITEMINFOBESIDEICONINTERNAL_B__29_1_OFFSET UNITYSDK_OFFSET(0x1A24D260)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTipsDialogPopWindowController___c_TypeDefinitionIndex = 43366;

	class UIBangkovTipsDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTipsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x350C0);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__29_1()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTipsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x350C8);
		}
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTipsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x350D0);
		}
		static ::System::Func_2<::System::Object*, ::FMHDMLBDIJC*>** StaticGet___9__32_1()
		{
			return (::System::Func_2<::System::Object*, ::FMHDMLBDIJC*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTipsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x350D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OpenItemInfoBesideIconInternal_b__29_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__OPENITEMINFOBESIDEICONINTERNAL_B__29_1_OFFSET))(this);
		}

		::System::Boolean _OnClickOKBtn_b__32_0(::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__ONCLICKOKBTN_B__32_0_OFFSET))(this, item);
		}

		::FMHDMLBDIJC* _OnClickOKBtn_b__32_1(::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo item)
		{
			return ((::FMHDMLBDIJC*(*)(::PVOID, ::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__ONCLICKOKBTN_B__32_1_OFFSET))(this, item);
		}
	};
}
