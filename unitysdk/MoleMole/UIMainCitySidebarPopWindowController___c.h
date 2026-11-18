#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYSIDEBARPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193A4C60)
#define MOLEMOLE_UIMAINCITYSIDEBARPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193A4CA0)
#define MOLEMOLE_UIMAINCITYSIDEBARPOPWINDOWCONTROLLER___C__ONUIOPEN_B__7_0_OFFSET UNITYSDK_OFFSET(0x193A4CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySidebarPopWindowController___c_TypeDefinitionIndex = 53117;

	class UIMainCitySidebarPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySidebarPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4ACB0);
		}
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySidebarPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4ACB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARPOPWINDOWCONTROLLER___C__ONUIOPEN_B__7_0_OFFSET))(this);
		}
	};
}
