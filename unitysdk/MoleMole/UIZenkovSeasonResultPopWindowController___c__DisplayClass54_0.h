#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class EADLNAAMFFE;
namespace MoleMole { class UIZenkovResultNumWidgetController; }
namespace MoleMole { class UIZenkovSeasonResultPopWindowController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13B429B0)
#define MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS54_0__PLAYRESULTANIMATION_B__2_OFFSET UNITYSDK_OFFSET(0x13B429C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSeasonResultPopWindowController___c__DisplayClass54_0_TypeDefinitionIndex = 49160;

	class UIZenkovSeasonResultPopWindowController___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIZenkovResultNumWidgetController*, ::System::Object*>* configLookup; // 0x10
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::UIZenkovResultNumWidgetController*, ::System::Int32>>* activeWidgets; // 0x18
		::MoleMole::UIZenkovSeasonResultPopWindowController* __4__this; // 0x20
		::System::Int32 numDigits; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::EADLNAAMFFE* _PlayResultAnimation_b__2(::System::ValueTuple_2<::MoleMole::UIZenkovResultNumWidgetController*, ::System::Int32> pair, ::System::Int32 idx)
		{
			return ((::EADLNAAMFFE*(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::UIZenkovResultNumWidgetController*, ::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS54_0__PLAYRESULTANIMATION_B__2_OFFSET))(this, pair, idx);
		}
	};
}
