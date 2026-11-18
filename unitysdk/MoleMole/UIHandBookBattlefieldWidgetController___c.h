#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CCPCAPILDDK;
namespace System { class Action; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C68C10)
#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C68C50)
#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__REFRESHSHOPPOPUP_B__25_1_OFFSET UNITYSDK_OFFSET(0x18C68C60)
#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__TRYSHOWEXPLORINGDIALOG_B__27_0_OFFSET UNITYSDK_OFFSET(0x18C68C90)
#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__TRYSHOWEXPLORINGDIALOG_B__27_1_OFFSET UNITYSDK_OFFSET(0x18C68D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookBattlefieldWidgetController___c_TypeDefinitionIndex = 76237;

	class UIHandBookBattlefieldWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__27_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBattlefieldWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35350);
		}
		static ::System::Predicate_1<::CCPCAPILDDK*>** StaticGet___9__25_1()
		{
			return (::System::Predicate_1<::CCPCAPILDDK*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBattlefieldWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35358);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBattlefieldWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35360);
		}
		static ::System::Action** StaticGet___9__27_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBattlefieldWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshShopPopup_b__25_1(::CCPCAPILDDK* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCPCAPILDDK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__REFRESHSHOPPOPUP_B__25_1_OFFSET))(this, x);
		}

		::System::Void _TryShowExploringDialog_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__TRYSHOWEXPLORINGDIALOG_B__27_0_OFFSET))(this);
		}

		::System::Void _TryShowExploringDialog_b__27_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__TRYSHOWEXPLORINGDIALOG_B__27_1_OFFSET))(this);
		}
	};
}
