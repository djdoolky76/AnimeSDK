#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DFEBOPELMDI;
class KGMDCDKMBEJ_HKEFCDFAGCF;

#define MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C9F620)
#define MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__DISPLAYCLASS19_0__ONINFO_B__1_OFFSET UNITYSDK_OFFSET(0x14C9F630)

namespace MoleMole
{
	inline static constexpr unsigned int UIMaincityMiniGameChildWindowController___c__DisplayClass19_0_TypeDefinitionIndex = 61943;

	class UIMaincityMiniGameChildWindowController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::DFEBOPELMDI* playerInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnInfo_b__1(::KGMDCDKMBEJ_HKEFCDFAGCF* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGMDCDKMBEJ_HKEFCDFAGCF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMINIGAMECHILDWINDOWCONTROLLER___C__DISPLAYCLASS19_0__ONINFO_B__1_OFFSET))(this, t);
		}
	};
}
