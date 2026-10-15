#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroupProcess; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A3250)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A32B0)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A31D0)

namespace RPG::GameCore
{
	class RogueAdvRoomCandyCrashGroupProcess : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* GroupKey; // 0x18
		::RPG::GameCore::DynamicFloat* DestroyDelay; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDestroyStart; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPPROCESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
