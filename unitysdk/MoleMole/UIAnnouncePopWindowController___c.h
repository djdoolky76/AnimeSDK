#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17035F40)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17035F80)
#define MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___C__SHOWUIANNOUNCECONTEXT_B__19_0_OFFSET UNITYSDK_OFFSET(0x17035F90)

namespace MoleMole
{
	inline static constexpr unsigned int UIAnnouncePopWindowController___c_TypeDefinitionIndex = 64231;

	class UIAnnouncePopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAnnouncePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AAB0);
		}
		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAnnouncePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AAB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowUIAnnounceContext_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANNOUNCEPOPWINDOWCONTROLLER___C__SHOWUIANNOUNCECONTEXT_B__19_0_OFFSET))(this);
		}
	};
}
