#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MHODHAMHFDF;
class OLPJILLNHNI;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKBENCHINFORMATION02PAGECONTROLLER___C__BINDEVENT_BUTTON_B__12_1_OFFSET UNITYSDK_OFFSET(0x164E4790)
#define MOLEMOLE_UIWORKBENCHINFORMATION02PAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x164E4720)
#define MOLEMOLE_UIWORKBENCHINFORMATION02PAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x164E4760)
#define MOLEMOLE_UIWORKBENCHINFORMATION02PAGECONTROLLER___C__INITCLUEAREADATA_B__15_0_OFFSET UNITYSDK_OFFSET(0x164E4850)
#define MOLEMOLE_UIWORKBENCHINFORMATION02PAGECONTROLLER___C__INITCLUEDATA_B__18_0_OFFSET UNITYSDK_OFFSET(0x164E48C0)
#define MOLEMOLE_UIWORKBENCHINFORMATION02PAGECONTROLLER___C__ONCURRENTAREACHANGE_B__17_0_OFFSET UNITYSDK_OFFSET(0x164E48A0)
#define MOLEMOLE_UIWORKBENCHINFORMATION02PAGECONTROLLER___C__ONUICLOSE_B__5_0_OFFSET UNITYSDK_OFFSET(0x164E4770)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchInformation02PageController___c_TypeDefinitionIndex = 73506;

	class UIWorkBenchInformation02PageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInformation02PageController___c_TypeDefinitionIndex)->GetStaticField(0x47390);
		}
		static ::System::Func_2<::MHODHAMHFDF*, ::System::Int32>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::MHODHAMHFDF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInformation02PageController___c_TypeDefinitionIndex)->GetStaticField(0x47398);
		}
		static ::System::Action** StaticGet___9__12_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInformation02PageController___c_TypeDefinitionIndex)->GetStaticField(0x473A0);
		}
		static ::System::Comparison_1<::MHODHAMHFDF*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::MHODHAMHFDF*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInformation02PageController___c_TypeDefinitionIndex)->GetStaticField(0x473A8);
		}
		static ::System::Comparison_1<::OLPJILLNHNI*>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::OLPJILLNHNI*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInformation02PageController___c_TypeDefinitionIndex)->GetStaticField(0x473B0);
		}
		static ::System::Func_2<::MHODHAMHFDF*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::MHODHAMHFDF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchInformation02PageController___c_TypeDefinitionIndex)->GetStaticField(0x473B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINFORMATION02PAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINFORMATION02PAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIClose_b__5_0(::MHODHAMHFDF* template_)
		{
			return ((::System::Int32(*)(::PVOID, ::MHODHAMHFDF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINFORMATION02PAGECONTROLLER___C__ONUICLOSE_B__5_0_OFFSET))(this, template_);
		}

		::System::Void _BindEvent_Button_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINFORMATION02PAGECONTROLLER___C__BINDEVENT_BUTTON_B__12_1_OFFSET))(this);
		}

		::System::Int32 _InitClueAreaData_b__15_0(::OLPJILLNHNI* a, ::OLPJILLNHNI* b)
		{
			return ((::System::Int32(*)(::PVOID, ::OLPJILLNHNI*, ::OLPJILLNHNI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINFORMATION02PAGECONTROLLER___C__INITCLUEAREADATA_B__15_0_OFFSET))(this, a, b);
		}

		::System::Int32 _OnCurrentAreaChange_b__17_0(::MHODHAMHFDF* template_)
		{
			return ((::System::Int32(*)(::PVOID, ::MHODHAMHFDF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINFORMATION02PAGECONTROLLER___C__ONCURRENTAREACHANGE_B__17_0_OFFSET))(this, template_);
		}

		::System::Int32 _InitClueData_b__18_0(::MHODHAMHFDF* a, ::MHODHAMHFDF* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MHODHAMHFDF*, ::MHODHAMHFDF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHINFORMATION02PAGECONTROLLER___C__INITCLUEDATA_B__18_0_OFFSET))(this, a, b);
		}
	};
}
