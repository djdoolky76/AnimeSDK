#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AFD890)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13AFD8D0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__REFRESHCLOUD_B__13_0_OFFSET UNITYSDK_OFFSET(0x13AFD8E0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__REFRESHCLOUD_B__13_1_OFFSET UNITYSDK_OFFSET(0x13AFDBF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallRechargeV2WidgetController___c_TypeDefinitionIndex = 45657;

	class UIShoppingMallRechargeV2WidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallRechargeV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x51950);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallRechargeV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x51958);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIShoppingMallRechargeV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x51960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshCloud_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__REFRESHCLOUD_B__13_0_OFFSET))(this);
		}

		::System::Void _RefreshCloud_b__13_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEV2WIDGETCONTROLLER___C__REFRESHCLOUD_B__13_1_OFFSET))(this);
		}
	};
}
