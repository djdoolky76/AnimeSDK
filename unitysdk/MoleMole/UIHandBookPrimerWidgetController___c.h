#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHandBookPrimerWidgetController_TabItem; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x199D7B50)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x199D7B90)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__INITTAB_B__12_0_OFFSET UNITYSDK_OFFSET(0x199D7BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookPrimerWidgetController___c_TypeDefinitionIndex = 91321;

	class UIHandBookPrimerWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookPrimerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C260);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookPrimerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C268);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitTab_b__12_0(::MoleMole::UIHandBookPrimerWidgetController_TabItem* a, ::MoleMole::UIHandBookPrimerWidgetController_TabItem* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHandBookPrimerWidgetController_TabItem*, ::MoleMole::UIHandBookPrimerWidgetController_TabItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__INITTAB_B__12_0_OFFSET))(this, a, b);
		}
	};
}
