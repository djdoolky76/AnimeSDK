#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CBMDHKLONOL;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16492260)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x164922A0)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___C__GETSORTEDDATALIST_B__7_0_OFFSET UNITYSDK_OFFSET(0x164922B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDataStatWidgetController___c_TypeDefinitionIndex = 82517;

	class UIRABDataStatWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::CBMDHKLONOL*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::CBMDHKLONOL*>**)Il2CppClass::FromTypeDefinitionIndex(UIRABDataStatWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EC20);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRABDataStatWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4EC28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedDataList_b__7_0(::CBMDHKLONOL* a, ::CBMDHKLONOL* b)
		{
			return ((::System::Int32(*)(::PVOID, ::CBMDHKLONOL*, ::CBMDHKLONOL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___C__GETSORTEDDATALIST_B__7_0_OFFSET))(this, a, b);
		}
	};
}
