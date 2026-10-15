#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestartBattleBlackListRow; }

#define RPG_GAMECORE_RESTARTBATTLEBLACKLISTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98E5A0)
#define RPG_GAMECORE_RESTARTBATTLEBLACKLISTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D98E500)

namespace RPG::GameCore
{
	class RestartBattleBlackListRow : public ::System::Object
	{
	public:
		::System::UInt32 EventID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTARTBATTLEBLACKLISTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestartBattleBlackListRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestartBattleBlackListRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTARTBATTLEBLACKLISTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
