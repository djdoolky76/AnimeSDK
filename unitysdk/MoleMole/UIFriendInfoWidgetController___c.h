#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EDAF50)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16EDAF90)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___C__INITFRIENDINFOPAGE_B__10_0_OFFSET UNITYSDK_OFFSET(0x16EDAFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendInfoWidgetController___c_TypeDefinitionIndex = 39201;

	class UIFriendInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIFriendInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46F50);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIFriendInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46F58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitFriendInfoPage_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___C__INITFRIENDINFOPAGE_B__10_0_OFFSET))(this);
		}
	};
}
