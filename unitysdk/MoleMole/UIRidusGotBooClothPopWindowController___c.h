#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIRIDUSGOTBOOCLOTHPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D469D0)
#define MOLEMOLE_UIRIDUSGOTBOOCLOTHPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D46A10)
#define MOLEMOLE_UIRIDUSGOTBOOCLOTHPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET UNITYSDK_OFFSET(0x15D46A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooClothPopWindowController___c_TypeDefinitionIndex = 59871;

	class UIRidusGotBooClothPopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooClothPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42310);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooClothPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42318);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCLOTHPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCLOTHPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCLOTHPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET))(this);
		}
	};
}
