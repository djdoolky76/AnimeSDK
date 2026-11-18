#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LIBOIKJGAIH.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIGeneralMissionCompletePopWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180469E0)
#define MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__INITITEMLIST_B__0_OFFSET UNITYSDK_OFFSET(0x180469F0)
#define MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__INITITEMLIST_B__1_OFFSET UNITYSDK_OFFSET(0x18046AD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralMissionCompletePopWindowController___c__DisplayClass19_0_TypeDefinitionIndex = 85823;

	class UIGeneralMissionCompletePopWindowController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* overrideOnClickItemBtn; // 0x10
		::MoleMole::UIGeneralMissionCompletePopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitItemList_b__0(::LIBOIKJGAIH binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::LIBOIKJGAIH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__INITITEMLIST_B__0_OFFSET))(this, binderInfo);
		}

		::System::Void _InitItemList_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__INITITEMLIST_B__1_OFFSET))(this);
		}
	};
}
