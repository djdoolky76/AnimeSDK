#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D10110)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D10150)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___C__ONCLICKINVITECALLBACK_B__13_1_OFFSET UNITYSDK_OFFSET(0x15D10160)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelFriendCardRowWidgetController___c_TypeDefinitionIndex = 41069;

	class UIMarcelFriendCardRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::Int32, ::System::Int32>** StaticGet___9__13_1()
		{
			return (::System::Action_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMarcelFriendCardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C3F0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMarcelFriendCardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C3F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickInviteCallback_b__13_1(::System::Int32 code, ::System::Int32 seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___C__ONCLICKINVITECALLBACK_B__13_1_OFFSET))(this, code, seconds);
		}
	};
}
