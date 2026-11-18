#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOCDFLHIDDI;
namespace MoleMole { class UIZenkovDetailDialogPopWindowController_AffixGroup; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIZENKOVDETAILDIALOGPOPWINDOWCONTROLLER___C__BUILDAFFIXGROUPS_B__3_0_OFFSET UNITYSDK_OFFSET(0x18F69550)
#define MOLEMOLE_UIZENKOVDETAILDIALOGPOPWINDOWCONTROLLER___C__BUILDAFFIXGROUPS_B__3_1_OFFSET UNITYSDK_OFFSET(0x18F69500)
#define MOLEMOLE_UIZENKOVDETAILDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F694B0)
#define MOLEMOLE_UIZENKOVDETAILDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F694F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDetailDialogPopWindowController___c_TypeDefinitionIndex = 70762;

	class UIZenkovDetailDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::NOCDFLHIDDI*>** StaticGet___9__3_1()
		{
			return (::System::Comparison_1<::NOCDFLHIDDI*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovDetailDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x39380);
		}
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovDetailDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x39388);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovDetailDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x39390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDETAILDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDETAILDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildAffixGroups_b__3_1(::NOCDFLHIDDI* a, ::NOCDFLHIDDI* b)
		{
			return ((::System::Int32(*)(::PVOID, ::NOCDFLHIDDI*, ::NOCDFLHIDDI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDETAILDIALOGPOPWINDOWCONTROLLER___C__BUILDAFFIXGROUPS_B__3_1_OFFSET))(this, a, b);
		}

		::System::Int32 _BuildAffixGroups_b__3_0(::MoleMole::UIZenkovDetailDialogPopWindowController_AffixGroup* a, ::MoleMole::UIZenkovDetailDialogPopWindowController_AffixGroup* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIZenkovDetailDialogPopWindowController_AffixGroup*, ::MoleMole::UIZenkovDetailDialogPopWindowController_AffixGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDETAILDIALOGPOPWINDOWCONTROLLER___C__BUILDAFFIXGROUPS_B__3_0_OFFSET))(this, a, b);
		}
	};
}
