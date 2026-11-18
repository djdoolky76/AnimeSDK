#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D81060)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D810A0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_0_OFFSET UNITYSDK_OFFSET(0x17D810B0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_1_OFFSET UNITYSDK_OFFSET(0x17D811D0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_2_OFFSET UNITYSDK_OFFSET(0x17D811E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIReportDialogPopWindowController___c_TypeDefinitionIndex = 43334;

	class UIReportDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__22_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIReportDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C5F0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIReportDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C5F8);
		}
		static ::System::Action** StaticGet___9__22_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIReportDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C600);
		}
		static ::System::Action** StaticGet___9__22_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIReportDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C608);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SubmitReport_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_0_OFFSET))(this);
		}

		::System::Void _SubmitReport_b__22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_1_OFFSET))(this);
		}

		::System::Void _SubmitReport_b__22_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_2_OFFSET))(this);
		}
	};
}
