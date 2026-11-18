#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___C__BUILDSETTLETRANSFERITEMLIST_B__46_0_OFFSET UNITYSDK_OFFSET(0x1671D610)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1671D5C0)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1671D600)
#define MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___C__NORMALIZESETTLETRANSFERITEMLIST_B__47_0_OFFSET UNITYSDK_OFFSET(0x1671D630)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWarehousePageController___c_TypeDefinitionIndex = 92266;

	class UIZenkovWarehousePageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>** StaticGet___9__46_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovWarehousePageController___c_TypeDefinitionIndex)->GetStaticField(0x473D0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovWarehousePageController___c_TypeDefinitionIndex)->GetStaticField(0x473D8);
		}
		static ::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>** StaticGet___9__47_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovWarehousePageController___c_TypeDefinitionIndex)->GetStaticField(0x473E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildSettleTransferItemList_b__46_0(::System::ValueTuple_2<::System::Int32, ::System::Int32> left, ::System::ValueTuple_2<::System::Int32, ::System::Int32> right)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___C__BUILDSETTLETRANSFERITEMLIST_B__46_0_OFFSET))(this, left, right);
		}

		::System::Int32 _NormalizeSettleTransferItemList_b__47_0(::System::ValueTuple_2<::System::Int32, ::System::Int32> left, ::System::ValueTuple_2<::System::Int32, ::System::Int32> right)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWAREHOUSEPAGECONTROLLER___C__NORMALIZESETTLETRANSFERITEMLIST_B__47_0_OFFSET))(this, left, right);
		}
	};
}
