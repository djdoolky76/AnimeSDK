#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCEDCNCPFDL.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"
#include "unitysdk/NPCCrowd/Ability/EMontageEndBehavior.h"
#include "unitysdk/NPCCrowd/Ability/EMontagePriorityLayer.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE_GET_SHOWGROUPMEMBERID_OFFSET UNITYSDK_OFFSET(0x124639F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE_GET_SHOWTAGID_OFFSET UNITYSDK_OFFSET(0x124639E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x12463A00)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x124639C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayMontageNode_TypeDefinitionIndex = 50609;

	class MainCityChatPlayMontageNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* GroupMemberID; // 0x18
		::System::Int32 MontageID; // 0x20
		::DCEDCNCPFDL EntitySourceType; // 0x24
		::System::Int32 TagID; // 0x28
		::System::Boolean MontageIDUseAnimationID; // 0x2C
		::System::Byte _padding0[0x3];
		::NPCCrowd::Ability::EMontagePriorityLayer PriorityLayer; // 0x30
		::NPCCrowd::Ability::EMontageEndBehavior EndBehavior; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShowTagID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE_GET_SHOWTAGID_OFFSET))(this);
		}

		::System::Boolean get_ShowGroupMemberID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE_GET_SHOWGROUPMEMBERID_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYMONTAGENODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
