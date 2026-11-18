#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176872F0)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17687330)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___C__ONSELECTAVATAR_B__14_0_OFFSET UNITYSDK_OFFSET(0x17687380)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___C__ONSELECTAVATAR_B__14_1_OFFSET UNITYSDK_OFFSET(0x176873B0)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___C___REFRESHROLES_B__12_2_OFFSET UNITYSDK_OFFSET(0x17687340)
#define MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___C___REFRESHROLES_B__12_3_OFFSET UNITYSDK_OFFSET(0x17687360)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalLineUp_RoomSelectWidgetController___c_TypeDefinitionIndex = 72212;

	class UIHadalLineUp_RoomSelectWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalLineUp_RoomSelectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x489C0);
		}
		static ::System::Action** StaticGet___9__14_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalLineUp_RoomSelectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x489C8);
		}
		static ::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>** StaticGet___9__12_2()
		{
			return (::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalLineUp_RoomSelectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x489D0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHadalLineUp_RoomSelectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x489D8);
		}
		static ::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>** StaticGet___9__12_3()
		{
			return (::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalLineUp_RoomSelectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x489E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshRoles_b__12_2(::MoleMole::UIGeneralHeadRowWidgetController* t)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___C___REFRESHROLES_B__12_2_OFFSET))(this, t);
		}

		::System::Void __RefreshRoles_b__12_3(::MoleMole::UIGeneralHeadRowWidgetController* t)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___C___REFRESHROLES_B__12_3_OFFSET))(this, t);
		}

		::System::Void _OnSelectAvatar_b__14_0(::MoleMole::UIGeneralHeadRowWidgetController* t)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___C__ONSELECTAVATAR_B__14_0_OFFSET))(this, t);
		}

		::System::Void _OnSelectAvatar_b__14_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALLINEUP_ROOMSELECTWIDGETCONTROLLER___C__ONSELECTAVATAR_B__14_1_OFFSET))(this);
		}
	};
}
