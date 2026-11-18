#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C41450)
#define MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C41490)
#define MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__ONUIINIT_B__3_2_OFFSET UNITYSDK_OFFSET(0x19C414A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookNormalMaterialWidgetController___c_TypeDefinitionIndex = 73175;

	class UIHandBookNormalMaterialWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookNormalMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C250);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookNormalMaterialWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C258);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKNORMALMATERIALWIDGETCONTROLLER___C__ONUIINIT_B__3_2_OFFSET))(this);
		}
	};
}
