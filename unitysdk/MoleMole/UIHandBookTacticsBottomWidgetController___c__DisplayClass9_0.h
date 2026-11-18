#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LMAJAHEPDEI;
class UITraningModel;

#define MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18391B60)
#define MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x18391B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookTacticsBottomWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 44428;

	class UIHandBookTacticsBottomWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::UITraningModel* trainingModel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__0(::LMAJAHEPDEI* a, ::LMAJAHEPDEI* b)
		{
			return ((::System::Int32(*)(::PVOID, ::LMAJAHEPDEI*, ::LMAJAHEPDEI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_B__0_OFFSET))(this, a, b);
		}
	};
}
