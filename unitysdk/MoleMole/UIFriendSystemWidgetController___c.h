#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__BINDEVENT_B__10_0_OFFSET UNITYSDK_OFFSET(0x18099670)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__BINDEVENT_B__10_1_OFFSET UNITYSDK_OFFSET(0x18099790)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18099620)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18099660)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemWidgetController___c_TypeDefinitionIndex = 60621;

	class UIFriendSystemWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIFriendSystemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42100);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIFriendSystemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42108);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIFriendSystemWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindEvent_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__BINDEVENT_B__10_0_OFFSET))(this);
		}

		::System::Void _BindEvent_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___C__BINDEVENT_B__10_1_OFFSET))(this);
		}
	};
}
