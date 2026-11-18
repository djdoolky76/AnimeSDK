#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISCHEDULEHANDTACTICSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DA2570)
#define MOLEMOLE_UISCHEDULEHANDTACTICSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA25B0)
#define MOLEMOLE_UISCHEDULEHANDTACTICSDIALOGPOPWINDOWCONTROLLER___C___REFRESHVIEW_B__12_0_OFFSET UNITYSDK_OFFSET(0x17DA25C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScheduleHandTacticsDialogPopWindowController___c_TypeDefinitionIndex = 79227;

	class UIScheduleHandTacticsDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__12_0()
		{
			return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(UIScheduleHandTacticsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C670);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIScheduleHandTacticsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C678);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISCHEDULEHANDTACTICSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCHEDULEHANDTACTICSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshView_b__12_0(::DGDNKBFMHME* vp)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCHEDULEHANDTACTICSDIALOGPOPWINDOWCONTROLLER___C___REFRESHVIEW_B__12_0_OFFSET))(this, vp);
		}
	};
}
