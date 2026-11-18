#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1801AD00)
#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1801AD40)
#define MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER___C__ONUIINIT_B__6_1_OFFSET UNITYSDK_OFFSET(0x1801AD50)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreKeyRowTrackWidgetController___c_TypeDefinitionIndex = 69605;

	class UIFashionStoreKeyRowTrackWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::GameObject*>** StaticGet___9__6_1()
		{
			return (::System::Action_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(UIFashionStoreKeyRowTrackWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44E70);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIFashionStoreKeyRowTrackWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44E78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_1(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYROWTRACKWIDGETCONTROLLER___C__ONUIINIT_B__6_1_OFFSET))(this, gameObject);
		}
	};
}
