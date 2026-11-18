#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IPHHDBILONA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C40FA0)
#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C40FE0)
#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET UNITYSDK_OFFSET(0x19C40FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookHadalWidgetWidgetController___c_TypeDefinitionIndex = 68182;

	class UIHandBookHadalWidgetWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookHadalWidgetWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38E10);
		}
		static ::System::Func_2<::IPHHDBILONA*, ::System::Int32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::IPHHDBILONA*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookHadalWidgetWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38E18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIOpen_b__4_0(::IPHHDBILONA* cfg)
		{
			return ((::System::Int32(*)(::PVOID, ::IPHHDBILONA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET))(this, cfg);
		}
	};
}
