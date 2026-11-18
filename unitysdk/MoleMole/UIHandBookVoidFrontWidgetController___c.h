#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FICMFIFLBEC;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187C33C0)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187C3400)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0x187C3410)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__REFRESHVIEW_B__6_0_OFFSET UNITYSDK_OFFSET(0x187C3420)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookVoidFrontWidgetController___c_TypeDefinitionIndex = 44573;

	class UIHandBookVoidFrontWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::FICMFIFLBEC*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::FICMFIFLBEC*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookVoidFrontWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x50D30);
		}
		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookVoidFrontWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x50D38);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookVoidFrontWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x50D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__2_0(::System::Int32 i)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__ONUIINIT_B__2_0_OFFSET))(this, i);
		}

		::System::Int32 _RefreshView_b__6_0(::FICMFIFLBEC* l, ::FICMFIFLBEC* r)
		{
			return ((::System::Int32(*)(::PVOID, ::FICMFIFLBEC*, ::FICMFIFLBEC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__REFRESHVIEW_B__6_0_OFFSET))(this, l, r);
		}
	};
}
