#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitRogueAdventureRoomStop; }

#define RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEB27E0)
#define RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EEB27F0)
#define RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EEB27A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueAdventureRoomStop_TypeDefinitionIndex = 21150;

	class WaitRogueAdventureRoomStop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueAdventureRoomStop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueAdventureRoomStop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueAdventureRoomStop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueAdventureRoomStop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEADVENTUREROOMSTOP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
