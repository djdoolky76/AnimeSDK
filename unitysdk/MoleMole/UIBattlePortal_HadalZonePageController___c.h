#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOAHNKGLKKG;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17ED1B60)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17ED1BA0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__ONUIINIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x17ED1BB0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C___FETCHTYPEDZONES_B__11_0_OFFSET UNITYSDK_OFFSET(0x17ED1C40)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C___FETCHTYPEDZONES_B__11_1_OFFSET UNITYSDK_OFFSET(0x17ED1C90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBattlePortal_HadalZonePageController___c_TypeDefinitionIndex = 78732;

	class UIBattlePortal_HadalZonePageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::NOAHNKGLKKG*>** StaticGet___9__11_1()
		{
			return (::System::Comparison_1<::NOAHNKGLKKG*>**)Il2CppClass::FromTypeDefinitionIndex(UIBattlePortal_HadalZonePageController___c_TypeDefinitionIndex)->GetStaticField(0x350E0);
		}
		static ::System::Action** StaticGet___9__4_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBattlePortal_HadalZonePageController___c_TypeDefinitionIndex)->GetStaticField(0x350E8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBattlePortal_HadalZonePageController___c_TypeDefinitionIndex)->GetStaticField(0x350F0);
		}
		static ::System::Comparison_1<::NOAHNKGLKKG*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::NOAHNKGLKKG*>**)Il2CppClass::FromTypeDefinitionIndex(UIBattlePortal_HadalZonePageController___c_TypeDefinitionIndex)->GetStaticField(0x350F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__ONUIINIT_B__4_1_OFFSET))(this);
		}

		::System::Int32 __FetchTypedZones_b__11_0(::NOAHNKGLKKG* l, ::NOAHNKGLKKG* r)
		{
			return ((::System::Int32(*)(::PVOID, ::NOAHNKGLKKG*, ::NOAHNKGLKKG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C___FETCHTYPEDZONES_B__11_0_OFFSET))(this, l, r);
		}

		::System::Int32 __FetchTypedZones_b__11_1(::NOAHNKGLKKG* l, ::NOAHNKGLKKG* r)
		{
			return ((::System::Int32(*)(::PVOID, ::NOAHNKGLKKG*, ::NOAHNKGLKKG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C___FETCHTYPEDZONES_B__11_1_OFFSET))(this, l, r);
		}
	};
}
