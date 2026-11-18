#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2A06A0)
#define MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2A06E0)
#define MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__INITINLEVELCARDOBJ_B__9_2_OFFSET UNITYSDK_OFFSET(0x1A2A0820)
#define MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__INIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A2A06F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelCardOptionsDialogPopWindowController___c_TypeDefinitionIndex = 43504;

	class UIInLevelCardOptionsDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__9_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelCardOptionsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EFF0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelCardOptionsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EFF8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelCardOptionsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__INIT_B__4_0_OFFSET))(this);
		}

		::System::Void _InitInlevelCardObj_b__9_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__INITINLEVELCARDOBJ_B__9_2_OFFSET))(this);
		}
	};
}
