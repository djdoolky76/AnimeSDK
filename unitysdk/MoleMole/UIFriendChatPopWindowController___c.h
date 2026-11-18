#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3D3F10)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D3F50)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__ONINITFRIENDPANEL_B__78_1_OFFSET UNITYSDK_OFFSET(0x1A3D3F60)
#define MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__ONINITFRIENDPANEL_B__78_2_OFFSET UNITYSDK_OFFSET(0x1A3D4190)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatPopWindowController___c_TypeDefinitionIndex = 77444;

	class UIFriendChatPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__78_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFriendChatPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38D30);
		}
		static ::System::Action** StaticGet___9__78_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFriendChatPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38D38);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIFriendChatPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitFriendPanel_b__78_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__ONINITFRIENDPANEL_B__78_1_OFFSET))(this);
		}

		::System::Void _OnInitFriendPanel_b__78_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATPOPWINDOWCONTROLLER___C__ONINITFRIENDPANEL_B__78_2_OFFSET))(this);
		}
	};
}
