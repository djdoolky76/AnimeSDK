#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ACGHCAEEFAH;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A74FAD0)
#define MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A74FB10)
#define MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__INITEQUIPMENT_B__11_0_OFFSET UNITYSDK_OFFSET(0x1A74FC00)
#define MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x1A74FB20)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EquipmentSelectDialogPopWindowController___c_TypeDefinitionIndex = 40436;

	class UIAbyssS2EquipmentSelectDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EquipmentSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EC10);
		}
		static ::System::Comparison_1<::ACGHCAEEFAH*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::ACGHCAEEFAH*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EquipmentSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EC18);
		}
		static ::System::Func_2<::System::Int32, ::ACGHCAEEFAH*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Int32, ::ACGHCAEEFAH*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EquipmentSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EC20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::ACGHCAEEFAH* _OnUIOpen_b__6_0(::System::Int32 x)
		{
			return ((::ACGHCAEEFAH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__6_0_OFFSET))(this, x);
		}

		::System::Int32 _InitEquipment_b__11_0(::ACGHCAEEFAH* x, ::ACGHCAEEFAH* y)
		{
			return ((::System::Int32(*)(::PVOID, ::ACGHCAEEFAH*, ::ACGHCAEEFAH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EQUIPMENTSELECTDIALOGPOPWINDOWCONTROLLER___C__INITEQUIPMENT_B__11_0_OFFSET))(this, x, y);
		}
	};
}
