#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LeaveLoopScene; }

#define RPG_GAMECORE_LEAVELOOPSCENE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A3350)
#define RPG_GAMECORE_LEAVELOOPSCENE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A3360)
#define RPG_GAMECORE_LEAVELOOPSCENE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A3290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LeaveLoopScene_TypeDefinitionIndex = 20431;

	class LeaveLoopScene : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEAVELOOPSCENE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LeaveLoopScene* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LeaveLoopScene*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEAVELOOPSCENE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LeaveLoopScene* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LeaveLoopScene*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEAVELOOPSCENE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
