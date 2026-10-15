#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitRogueAdventureRoomStart; }

#define RPG_GAMECORE_WAITROGUEADVENTUREROOMSTART_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9FCE0)
#define RPG_GAMECORE_WAITROGUEADVENTUREROOMSTART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9FCF0)
#define RPG_GAMECORE_WAITROGUEADVENTUREROOMSTART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9FCA0)

namespace RPG::GameCore
{
	class WaitRogueAdventureRoomStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMSTART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueAdventureRoomStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueAdventureRoomStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMSTART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueAdventureRoomStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueAdventureRoomStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMSTART_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
