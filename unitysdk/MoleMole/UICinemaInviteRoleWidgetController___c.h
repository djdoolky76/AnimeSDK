#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x170560B0)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x170560F0)
#define MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___C__EXITPREPPAGE_B__16_0_OFFSET UNITYSDK_OFFSET(0x17056100)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaInviteRoleWidgetController___c_TypeDefinitionIndex = 48713;

	class UICinemaInviteRoleWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__16_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UICinemaInviteRoleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AB10);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UICinemaInviteRoleWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4AB18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ExitPrepPage_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEROLEWIDGETCONTROLLER___C__EXITPREPPAGE_B__16_0_OFFSET))(this);
		}
	};
}
