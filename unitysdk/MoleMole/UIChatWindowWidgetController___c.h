#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHKMKCIPOLD;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FB2D60)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB2DA0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__INITEMPTYCIRCLECONTENT_B__88_1_OFFSET UNITYSDK_OFFSET(0x19FB2DD0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEEMOJI_B__94_0_OFFSET UNITYSDK_OFFSET(0x19FB2DF0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEMSG_B__93_2_OFFSET UNITYSDK_OFFSET(0x19FB2DE0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDEMOJI_B__58_1_OFFSET UNITYSDK_OFFSET(0x19FB2DC0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDMSG_B__52_2_OFFSET UNITYSDK_OFFSET(0x19FB2DB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController___c_TypeDefinitionIndex = 73434;

	class UIChatWindowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35130);
		}
		static ::System::Action_1<::LHKMKCIPOLD*>** StaticGet___9__52_2()
		{
			return (::System::Action_1<::LHKMKCIPOLD*>**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35138);
		}
		static ::System::Action** StaticGet___9__93_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35140);
		}
		static ::System::Action_1<::LHKMKCIPOLD*>** StaticGet___9__58_1()
		{
			return (::System::Action_1<::LHKMKCIPOLD*>**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35148);
		}
		static ::System::Action** StaticGet___9__88_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35150);
		}
		static ::System::Action** StaticGet___9__94_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIChatWindowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSendFriendMsg_b__52_2(::LHKMKCIPOLD* data)
		{
			return ((::System::Void(*)(::PVOID, ::LHKMKCIPOLD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDMSG_B__52_2_OFFSET))(this, data);
		}

		::System::Void _OnClickSendFriendEmoji_b__58_1(::LHKMKCIPOLD* data)
		{
			return ((::System::Void(*)(::PVOID, ::LHKMKCIPOLD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDFRIENDEMOJI_B__58_1_OFFSET))(this, data);
		}

		::System::Void _InitEmptyCircleContent_b__88_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__INITEMPTYCIRCLECONTENT_B__88_1_OFFSET))(this);
		}

		::System::Void _OnClickSendCircleMsg_b__93_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEMSG_B__93_2_OFFSET))(this);
		}

		::System::Void _OnClickSendCircleEmoji_b__94_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__ONCLICKSENDCIRCLEEMOJI_B__94_0_OFFSET))(this);
		}
	};
}
