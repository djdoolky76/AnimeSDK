#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RandomTask; }

#define RPG_GAMECORE_RANDOMTASK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96CE10)
#define RPG_GAMECORE_RANDOMTASK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96CE20)
#define RPG_GAMECORE_RANDOMTASK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96CDE0)

namespace RPG::GameCore
{
	class RandomTask : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTASK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomTask* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomTask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTASK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomTask* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomTask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTASK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
