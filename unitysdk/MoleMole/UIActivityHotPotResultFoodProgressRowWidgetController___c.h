#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYHOTPOTRESULTFOODPROGRESSROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19824BC0)
#define MOLEMOLE_UIACTIVITYHOTPOTRESULTFOODPROGRESSROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19824C00)
#define MOLEMOLE_UIACTIVITYHOTPOTRESULTFOODPROGRESSROWWIDGETCONTROLLER___C__SETDATAANDREFRESHVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0x19824C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotResultFoodProgressRowWidgetController___c_TypeDefinitionIndex = 85321;

	class UIActivityHotPotResultFoodProgressRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotResultFoodProgressRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34F60);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityHotPotResultFoodProgressRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34F68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTRESULTFOODPROGRESSROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTRESULTFOODPROGRESSROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SetDataAndRefreshView_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTRESULTFOODPROGRESSROWWIDGETCONTROLLER___C__SETDATAANDREFRESHVIEW_B__4_0_OFFSET))(this);
		}
	};
}
