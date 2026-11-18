#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1798C650)
#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1798C690)
#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__OPENPERSONALQUEST_B__26_3_OFFSET UNITYSDK_OFFSET(0x1798C890)
#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__UPDATEPERSONALMISSION_B__24_6_OFFSET UNITYSDK_OFFSET(0x1798C6A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessageReplyWidgetController___c_TypeDefinitionIndex = 80468;

	class UIPrivateMessageReplyWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__24_6()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIPrivateMessageReplyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C580);
		}
		static ::System::Action** StaticGet___9__26_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIPrivateMessageReplyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C588);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIPrivateMessageReplyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _UpdatePersonalMission_b__24_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__UPDATEPERSONALMISSION_B__24_6_OFFSET))(this);
		}

		::System::Void _OpenPersonalQuest_b__26_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__OPENPERSONALQUEST_B__26_3_OFFSET))(this);
		}
	};
}
