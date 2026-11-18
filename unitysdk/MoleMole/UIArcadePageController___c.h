#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A13BDD0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A13BE10)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__ONSHOW_B__32_1_OFFSET UNITYSDK_OFFSET(0x1A13BE20)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__TRYJOININVITETEAMROOM_B__79_1_OFFSET UNITYSDK_OFFSET(0x1A13BEB0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__TRYJOININVITETEAMROOM_B__79_3_OFFSET UNITYSDK_OFFSET(0x1A13BF40)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePageController___c_TypeDefinitionIndex = 64397;

	class UIArcadePageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Int32>** StaticGet___9__79_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadePageController___c_TypeDefinitionIndex)->GetStaticField(0x488E0);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__32_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadePageController___c_TypeDefinitionIndex)->GetStaticField(0x488E8);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__79_3()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadePageController___c_TypeDefinitionIndex)->GetStaticField(0x488F0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIArcadePageController___c_TypeDefinitionIndex)->GetStaticField(0x488F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_b__32_1(::System::Int32 ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__ONSHOW_B__32_1_OFFSET))(this, ret);
		}

		::System::Void _TryJoinInviteTeamRoom_b__79_1(::System::Int32 ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__TRYJOININVITETEAMROOM_B__79_1_OFFSET))(this, ret);
		}

		::System::Void _TryJoinInviteTeamRoom_b__79_3(::System::Int32 ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__TRYJOININVITETEAMROOM_B__79_3_OFFSET))(this, ret);
		}
	};
}
