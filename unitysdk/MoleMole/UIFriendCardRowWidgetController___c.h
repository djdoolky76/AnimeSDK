#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__BINDADDFRIENDREQUESTBTN_B__36_2_OFFSET UNITYSDK_OFFSET(0x1836CDB0)
#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__BINDADDFRIENDREQUESTBTN_B__36_4_OFFSET UNITYSDK_OFFSET(0x1836CE70)
#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__BINDNONFRIENDPCBTN_B__34_1_OFFSET UNITYSDK_OFFSET(0x1836CD40)
#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1836CCF0)
#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1836CD30)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendCardRowWidgetController___c_TypeDefinitionIndex = 76305;

	class UIFriendCardRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__36_2()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIFriendCardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44E80);
		}
		static ::System::Action** StaticGet___9__34_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIFriendCardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44E88);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__36_4()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIFriendCardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44E90);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIFriendCardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44E98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindNonFriendPCBtn_b__34_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__BINDNONFRIENDPCBTN_B__34_1_OFFSET))(this);
		}

		::System::Void _BindAddFriendRequestBtn_b__36_2(::System::Boolean isDeleted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__BINDADDFRIENDREQUESTBTN_B__36_2_OFFSET))(this, isDeleted);
		}

		::System::Void _BindAddFriendRequestBtn_b__36_4(::System::Boolean isDeleted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__BINDADDFRIENDREQUESTBTN_B__36_4_OFFSET))(this, isDeleted);
		}
	};
}
