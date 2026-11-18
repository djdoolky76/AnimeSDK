#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MPDDADKFPBP;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173B3FC0)
#define MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173B4000)
#define MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__REFRESHSCROLLVIEW_B__15_0_OFFSET UNITYSDK_OFFSET(0x173B4010)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerSettlementDialogPopWindowController___c_TypeDefinitionIndex = 44595;

	class UIFlowerSettlementDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerSettlementDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38D10);
		}
		static ::System::Comparison_1<::MPDDADKFPBP*>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::MPDDADKFPBP*>**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerSettlementDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38D18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshScrollView_b__15_0(::MPDDADKFPBP* x, ::MPDDADKFPBP* y)
		{
			return ((::System::Int32(*)(::PVOID, ::MPDDADKFPBP*, ::MPDDADKFPBP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__REFRESHSCROLLVIEW_B__15_0_OFFSET))(this, x, y);
		}
	};
}
