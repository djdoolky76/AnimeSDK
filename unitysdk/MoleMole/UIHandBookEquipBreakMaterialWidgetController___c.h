#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIGJEBNOGLC;
class FOLOGHLENFB;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x183906B0)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x183906F0)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET UNITYSDK_OFFSET(0x18390700)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_1_OFFSET UNITYSDK_OFFSET(0x18390AF0)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_2_OFFSET UNITYSDK_OFFSET(0x18390B30)
#define MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_3_OFFSET UNITYSDK_OFFSET(0x18390B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex = 67190;

	class UIHandBookEquipBreakMaterialWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FOLOGHLENFB*, ::System::Boolean>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::FOLOGHLENFB*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38DE0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38DE8);
		}
		static ::System::Func_2<::System::Int32, ::FOLOGHLENFB*>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::System::Int32, ::FOLOGHLENFB*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38DF0);
		}
		static ::System::Func_2<::EIGJEBNOGLC*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::EIGJEBNOGLC*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38DF8);
		}
		static ::System::Func_2<::FOLOGHLENFB*, ::System::Boolean>** StaticGet___9__5_3()
		{
			return (::System::Func_2<::FOLOGHLENFB*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookEquipBreakMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38E00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnShow_b__5_0(::EIGJEBNOGLC* b)
		{
			return ((::System::Int32(*)(::PVOID, ::EIGJEBNOGLC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET))(this, b);
		}

		::FOLOGHLENFB* _OnShow_b__5_1(::System::Int32 itemID)
		{
			return ((::FOLOGHLENFB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_1_OFFSET))(this, itemID);
		}

		::System::Boolean _OnShow_b__5_2(::FOLOGHLENFB* itemTemplate)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_2_OFFSET))(this, itemTemplate);
		}

		::System::Boolean _OnShow_b__5_3(::FOLOGHLENFB* itemTemplate)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOLOGHLENFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKEQUIPBREAKMATERIALWIDGETCONTROLLER___C__ONSHOW_B__5_3_OFFSET))(this, itemTemplate);
		}
	};
}
