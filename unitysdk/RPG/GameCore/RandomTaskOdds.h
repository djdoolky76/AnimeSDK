#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RandomTaskOdds; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RANDOMTASKODDS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96CF80)
#define RPG_GAMECORE_RANDOMTASKODDS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96CE30)

namespace RPG::GameCore
{
	class RandomTaskOdds : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Odds; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTASKODDS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomTaskOdds* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomTaskOdds*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTASKODDS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
