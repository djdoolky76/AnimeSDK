#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UINewbieGuideSelectPopWindowController; }

#define MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17B90FB0)
#define MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS64_0__ONFETCHBTNCLICK_B__2_OFFSET UNITYSDK_OFFSET(0x17B90FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideSelectPopWindowController___c__DisplayClass64_0_TypeDefinitionIndex = 61161;

	class UINewbieGuideSelectPopWindowController___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::MoleMole::UINewbieGuideSelectPopWindowController* __4__this; // 0x10
		::System::Int32 toGetId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnFetchBtnClick_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDESELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS64_0__ONFETCHBTNCLICK_B__2_OFFSET))(this);
		}
	};
}
