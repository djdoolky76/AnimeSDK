#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BHBOJCCMJBE;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__BUILDSUITSLOTPROPERTYMAP_B__23_0_OFFSET UNITYSDK_OFFSET(0x17D7FCB0)
#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D7FBD0)
#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D7FC10)
#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__INITUI_B__21_0_OFFSET UNITYSDK_OFFSET(0x17D7FC20)
#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__ONOKBTNCLICK_B__40_1_OFFSET UNITYSDK_OFFSET(0x17D7FD10)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleSmartSetDialogPopWindowController___c_TypeDefinitionIndex = 55125;

	class UIRecycleSmartSetDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::BHBOJCCMJBE*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::BHBOJCCMJBE*>**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleSmartSetDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C5D0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleSmartSetDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C5D8);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__21_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleSmartSetDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C5E0);
		}
		static ::System::Action** StaticGet___9__40_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleSmartSetDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C5E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitUI_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__INITUI_B__21_0_OFFSET))(this);
		}

		::System::Int32 _BuildSuitSlotPropertyMap_b__23_0(::BHBOJCCMJBE* a, ::BHBOJCCMJBE* b)
		{
			return ((::System::Int32(*)(::PVOID, ::BHBOJCCMJBE*, ::BHBOJCCMJBE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__BUILDSUITSLOTPROPERTYMAP_B__23_0_OFFSET))(this, a, b);
		}

		::System::Void _OnOKBtnClick_b__40_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPWINDOWCONTROLLER___C__ONOKBTNCLICK_B__40_1_OFFSET))(this);
		}
	};
}
