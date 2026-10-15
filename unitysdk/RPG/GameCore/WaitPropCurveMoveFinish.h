#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicJson; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitPropCurveMoveFinish; }

#define RPG_GAMECORE_WAITPROPCURVEMOVEFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9E7A0)
#define RPG_GAMECORE_WAITPROPCURVEMOVEFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9E7E0)
#define RPG_GAMECORE_WAITPROPCURVEMOVEFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9E740)

namespace RPG::GameCore
{
	class WaitPropCurveMoveFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicJson* TargetCurve; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TasksConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropCurveMoveFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropCurveMoveFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropCurveMoveFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropCurveMoveFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
