#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ShowMazeBuffSelectInBattle; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SHOWMAZEBUFFSELECTINBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE1440)
#define RPG_GAMECORE_SHOWMAZEBUFFSELECTINBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE1450)
#define RPG_GAMECORE_SHOWMAZEBUFFSELECTINBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE1410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMazeBuffSelectInBattle_TypeDefinitionIndex = 22511;

	class ShowMazeBuffSelectInBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* MazeBuffIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelect; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEBUFFSELECTINBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMazeBuffSelectInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMazeBuffSelectInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEBUFFSELECTINBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMazeBuffSelectInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMazeBuffSelectInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMAZEBUFFSELECTINBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
