#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIEGLDMFMMF;
namespace MoleMole { class UIMainStoryPageController; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS89_0__CTOR_OFFSET UNITYSDK_OFFSET(0x190482C0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS89_0__GOTOBATTLE_G__JUMPTOLINEUPSELECT_0_OFFSET UNITYSDK_OFFSET(0x190482D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass89_0_TypeDefinitionIndex = 60162;

	class UIMainStoryPageController___c__DisplayClass89_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainStoryPageController* __4__this; // 0x10
		::AIEGLDMFMMF* battleTemplate; // 0x18
		::System::Int32 archiveFileID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS89_0__CTOR_OFFSET))(this);
		}

		::System::Void _GotoBattle_g__JumpToLineupSelect_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS89_0__GOTOBATTLE_G__JUMPTOLINEUPSELECT_0_OFFSET))(this);
		}
	};
}
