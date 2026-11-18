#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HILCKAHBCOM;

#define MOLEMOLE_UIACTIVITYCOMBATPAUSESTAGEWIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18844010)
#define MOLEMOLE_UIACTIVITYCOMBATPAUSESTAGEWIDGETCONTROLLER___C__DISPLAYCLASS25_0__FINDQUESTINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x18844020)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCombatPauseStageWidgetController___c__DisplayClass25_0_TypeDefinitionIndex = 85412;

	class UIActivityCombatPauseStageWidgetController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Int32 questID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSESTAGEWIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindQuestIndex_b__0(::HILCKAHBCOM* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::HILCKAHBCOM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMBATPAUSESTAGEWIDGETCONTROLLER___C__DISPLAYCLASS25_0__FINDQUESTINDEX_B__0_OFFSET))(this, x);
		}
	};
}
