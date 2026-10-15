#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterBehaviour; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MONSTERBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AE7F0)
#define RPG_GAMECORE_MONSTERBEHAVIOUR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8AE800)
#define RPG_GAMECORE_MONSTERBEHAVIOUR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8AE7C0)

namespace RPG::GameCore
{
	class MonsterBehaviour : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 InvokeRate; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERBEHAVIOUR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterBehaviour* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterBehaviour*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERBEHAVIOUR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterBehaviour* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterBehaviour*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERBEHAVIOUR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
