#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CEMFHGCGPFG;
class JBJAKFHKJEJ;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1807D060)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1807D0A0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__INITSCROLLVIEW_B__35_0_OFFSET UNITYSDK_OFFSET(0x1807D100)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__ONUIINIT_B__15_2_OFFSET UNITYSDK_OFFSET(0x1807D0B0)
#define MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__TRYSAVE_B__40_0_OFFSET UNITYSDK_OFFSET(0x1807D1C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseEditWidgetController___c_TypeDefinitionIndex = 81319;

	class UIDisplayCaseEditWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::CEMFHGCGPFG*>** StaticGet___9__15_2()
		{
			return (::System::Comparison_1<::CEMFHGCGPFG*>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseEditWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C350);
		}
		static ::System::Comparison_1<::JBJAKFHKJEJ*>** StaticGet___9__35_0()
		{
			return (::System::Comparison_1<::JBJAKFHKJEJ*>**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseEditWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C358);
		}
		static ::System::Action** StaticGet___9__40_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseEditWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C360);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIDisplayCaseEditWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__15_2(::CEMFHGCGPFG* i, ::CEMFHGCGPFG* j)
		{
			return ((::System::Int32(*)(::PVOID, ::CEMFHGCGPFG*, ::CEMFHGCGPFG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__ONUIINIT_B__15_2_OFFSET))(this, i, j);
		}

		::System::Int32 _InitScrollView_b__35_0(::JBJAKFHKJEJ* a, ::JBJAKFHKJEJ* b)
		{
			return ((::System::Int32(*)(::PVOID, ::JBJAKFHKJEJ*, ::JBJAKFHKJEJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__INITSCROLLVIEW_B__35_0_OFFSET))(this, a, b);
		}

		::System::Void _TrySave_b__40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEEDITWIDGETCONTROLLER___C__TRYSAVE_B__40_0_OFFSET))(this);
		}
	};
}
