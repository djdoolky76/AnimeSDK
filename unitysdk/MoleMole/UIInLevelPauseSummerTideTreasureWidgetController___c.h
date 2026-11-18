#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISummerTideTreasureInLevelItemWidgetController_Data; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIINLEVELPAUSESUMMERTIDETREASUREWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x196D77A0)
#define MOLEMOLE_UIINLEVELPAUSESUMMERTIDETREASUREWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x196D77E0)
#define MOLEMOLE_UIINLEVELPAUSESUMMERTIDETREASUREWIDGETCONTROLLER___C__REFRESHSCROLLVIEW_B__17_0_OFFSET UNITYSDK_OFFSET(0x196D77F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseSummerTideTreasureWidgetController___c_TypeDefinitionIndex = 84175;

	class UIInLevelPauseSummerTideTreasureWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSummerTideTreasureWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C370);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSummerTideTreasureWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C378);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESUMMERTIDETREASUREWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESUMMERTIDETREASUREWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshScrollView_b__17_0(::MoleMole::UISummerTideTreasureInLevelItemWidgetController_Data* a, ::MoleMole::UISummerTideTreasureInLevelItemWidgetController_Data* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UISummerTideTreasureInLevelItemWidgetController_Data*, ::MoleMole::UISummerTideTreasureInLevelItemWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESUMMERTIDETREASUREWIDGETCONTROLLER___C__REFRESHSCROLLVIEW_B__17_0_OFFSET))(this, a, b);
		}
	};
}
