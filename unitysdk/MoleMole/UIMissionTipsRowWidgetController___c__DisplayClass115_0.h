#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COPJJOHLBCG;
namespace System { class String; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS115_0__CTOR_OFFSET UNITYSDK_OFFSET(0x193B0BD0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS115_0__SETQUESTTEXTFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x193B0BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController___c__DisplayClass115_0_TypeDefinitionIndex = 71116;

	class UIMissionTipsRowWidgetController___c__DisplayClass115_0 : public ::System::Object
	{
	public:
		::COPJJOHLBCG* questCondition; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS115_0__CTOR_OFFSET))(this);
		}

		::System::String* _SetQuestTextFunc_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS115_0__SETQUESTTEXTFUNC_B__0_OFFSET))(this);
		}
	};
}
