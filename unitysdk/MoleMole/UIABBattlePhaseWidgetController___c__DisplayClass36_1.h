#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class MJGHEKNNBNA;

#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS36_1__CTOR_OFFSET UNITYSDK_OFFSET(0x162FF360)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS36_1__ONCAMPCHANGE_B__2_OFFSET UNITYSDK_OFFSET(0x162FF370)

namespace MoleMole
{
	inline static constexpr unsigned int UIABBattlePhaseWidgetController___c__DisplayClass36_1_TypeDefinitionIndex = 87227;

	template <typename T>
	class UIABBattlePhaseWidgetController___c__DisplayClass36_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> kv; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS36_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnCampChange_b__2(::MJGHEKNNBNA* cfg)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJGHEKNNBNA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS36_1__ONCAMPCHANGE_B__2_OFFSET))(this, cfg);
		}
	};
}
