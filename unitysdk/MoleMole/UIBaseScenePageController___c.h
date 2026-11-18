#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FF9A60)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___C__CHANGECAMERAMODE_B__11_0_OFFSET UNITYSDK_OFFSET(0x17FF9AB0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF9AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseScenePageController___c_TypeDefinitionIndex = 87062;

	class UIBaseScenePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBaseScenePageController___c_TypeDefinitionIndex)->GetStaticField(0x3EE10);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBaseScenePageController___c_TypeDefinitionIndex)->GetStaticField(0x3EE18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeCameraMode_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___C__CHANGECAMERAMODE_B__11_0_OFFSET))(this);
		}
	};
}
