#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitPropCurveMovePaused; }

#define RPG_GAMECORE_WAITPROPCURVEMOVEPAUSED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9E9D0)
#define RPG_GAMECORE_WAITPROPCURVEMOVEPAUSED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9EA10)
#define RPG_GAMECORE_WAITPROPCURVEMOVEPAUSED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9E970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropCurveMovePaused_TypeDefinitionIndex = 21010;

	class WaitPropCurveMovePaused : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TasksConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEPAUSED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropCurveMovePaused* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropCurveMovePaused*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEPAUSED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropCurveMovePaused* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropCurveMovePaused*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEPAUSED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
