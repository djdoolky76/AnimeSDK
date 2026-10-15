#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLC1Dot3AdventureRoomProcess; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B2EE0)
#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B2EF0)
#define RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B2EB0)

namespace RPG::GameCore
{
	class RogueDLC1Dot3AdventureRoomProcess : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPrepare; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSettleStart; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSettleResponse; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSettleFinish; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoginFinished; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3ADVENTUREROOMPROCESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
