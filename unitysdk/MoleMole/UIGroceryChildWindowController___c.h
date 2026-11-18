#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHIPCHKEHME;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x183863E0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18386420)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__INITVIEW_B__19_1_OFFSET UNITYSDK_OFFSET(0x18386430)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__SETCURGOODSLIST_B__28_0_OFFSET UNITYSDK_OFFSET(0x183864F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryChildWindowController___c_TypeDefinitionIndex = 68807;

	class UIGroceryChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::LHIPCHKEHME*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::LHIPCHKEHME*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIGroceryChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x44EE0);
		}
		static ::System::Action** StaticGet___9__19_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGroceryChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x44EE8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIGroceryChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x44EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitView_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__INITVIEW_B__19_1_OFFSET))(this);
		}

		::System::Boolean _SetCurGoodsList_b__28_0(::LHIPCHKEHME* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHIPCHKEHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__SETCURGOODSLIST_B__28_0_OFFSET))(this, x);
		}
	};
}
