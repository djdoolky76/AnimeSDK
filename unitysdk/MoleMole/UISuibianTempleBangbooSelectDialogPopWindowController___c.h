#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CDD900)
#define MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__CHECKBUDDY_B__14_0_OFFSET UNITYSDK_OFFSET(0x14CDDA20)
#define MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14CDD940)
#define MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__ONCREATEVIEW_B__13_2_OFFSET UNITYSDK_OFFSET(0x14CDD950)
#define MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__ONUIDESTROY_B__17_0_OFFSET UNITYSDK_OFFSET(0x14CDDA30)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBangbooSelectDialogPopWindowController___c_TypeDefinitionIndex = 60847;

	class UISuibianTempleBangbooSelectDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBangbooSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F290);
		}
		static ::System::Func_2<::CKENOHMEEGI*, ::System::UInt32>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::CKENOHMEEGI*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBangbooSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F298);
		}
		static ::System::Action** StaticGet___9__14_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBangbooSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F2A0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleBangbooSelectDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F2A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateView_b__13_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__ONCREATEVIEW_B__13_2_OFFSET))(this);
		}

		::System::Void _CheckBuddy_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__CHECKBUDDY_B__14_0_OFFSET))(this);
		}

		::System::UInt32 _OnUIDestroy_b__17_0(::CKENOHMEEGI* b)
		{
			return ((::System::UInt32(*)(::PVOID, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBANGBOOSELECTDIALOGPOPWINDOWCONTROLLER___C__ONUIDESTROY_B__17_0_OFFSET))(this, b);
		}
	};
}
