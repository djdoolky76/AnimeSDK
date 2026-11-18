#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNFIIBMAMDO;
namespace MoleMole { class UILevel_HadalResult_PopWindowController; }

#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x186B4720)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__ONPOPSHOWED_B__1_OFFSET UNITYSDK_OFFSET(0x186B4730)

namespace MoleMole
{
	inline static constexpr unsigned int UILevel_HadalResult_PopWindowController___c__DisplayClass10_0_TypeDefinitionIndex = 56018;

	class UILevel_HadalResult_PopWindowController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::BNFIIBMAMDO* hadalModel; // 0x10
		::MoleMole::UILevel_HadalResult_PopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPopShowed_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__ONPOPSHOWED_B__1_OFFSET))(this);
		}
	};
}
