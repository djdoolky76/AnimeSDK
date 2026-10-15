#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNPCRunAwayPlayer; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVNPCRUNAWAYPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A4E00)
#define RPG_GAMECORE_ADVNPCRUNAWAYPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A4E40)
#define RPG_GAMECORE_ADVNPCRUNAWAYPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A4DA0)

namespace RPG::GameCore
{
	class AdvNPCRunAwayPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Radius; // 0x18
		::System::Single MoveRadius; // 0x1C
		::System::Single Angle; // 0x20
		::System::UInt32 CandiatePoint; // 0x24
		::System::Single ConstC; // 0x28
		::System::Single Pow; // 0x2C
		::System::Single MaxRunAwayDistance; // 0x30
		::System::Single MaxRunAwayTime; // 0x34
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterRunAway; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLeaveRunAway; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinishRunAway; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRUNAWAYPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCRunAwayPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCRunAwayPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRUNAWAYPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCRunAwayPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCRunAwayPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRUNAWAYPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
