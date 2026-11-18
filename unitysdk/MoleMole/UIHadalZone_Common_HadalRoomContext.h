#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGGGPPLICEA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIMonsterCardInfoPopWindowController_ShowType.h"

class IBPCDEKGHCJ;
class LBNBIMMAOPJ;
class MEKACGJBPGE;
namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_COMMON_HADALROOMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x187BEB40)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_HadalRoomContext_TypeDefinitionIndex = 50980;

	class UIHadalZone_Common_HadalRoomContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MEKACGJBPGE* questCfg; // 0x28
		::MoleMole::Project::Config::BabelFloorInfoTemplateExt* babelFloorCfg; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* cardIDList; // 0x38
		::LBNBIMMAOPJ* abyssDungeonCfg; // 0x40
		::IBPCDEKGHCJ* activityBattleQuestCfg; // 0x48
		::System::Int32 monsterLevel; // 0x50
		::System::Boolean hideMonsterLevel; // 0x54
		::System::Byte _padding0[0x3];
		::JGGGPPLICEA playType; // 0x58
		::System::Int32 roomIndex; // 0x5C
		::MoleMole::UIMonsterCardInfoPopWindowController_ShowType showType; // 0x60
		::System::Int32 GroupChallengeID; // 0x64
		::System::Int32 questID; // 0x68
		::System::Int32 roomID; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_HADALROOMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
