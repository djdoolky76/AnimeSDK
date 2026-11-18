#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GKGPNGFIMDA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x185AC450)
#define MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x185AC490)
#define MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__ONSHOW_B__7_0_OFFSET UNITYSDK_OFFSET(0x185AC4A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleEfficiencyDialogPopWindowController___c_TypeDefinitionIndex = 52095;

	class UISuibianTempleEfficiencyDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::GKGPNGFIMDA*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::GKGPNGFIMDA*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleEfficiencyDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x39180);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleEfficiencyDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x39188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnShow_b__7_0(::GKGPNGFIMDA* item)
		{
			return ((::System::Int32(*)(::PVOID, ::GKGPNGFIMDA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__ONSHOW_B__7_0_OFFSET))(this, item);
		}
	};
}
