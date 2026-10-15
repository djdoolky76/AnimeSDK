#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicJson; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitPropCurveMoveArrived; }

#define RPG_GAMECORE_WAITPROPCURVEMOVEARRIVED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9E490)
#define RPG_GAMECORE_WAITPROPCURVEMOVEARRIVED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9E4D0)
#define RPG_GAMECORE_WAITPROPCURVEMOVEARRIVED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9E420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropCurveMoveArrived_TypeDefinitionIndex = 21014;

	class WaitPropCurveMoveArrived : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicJson* TargetCurve; // 0x20
		::RPG::GameCore::DynamicString* TargetPointIndex; // 0x28
		::System::Boolean ListenPositive; // 0x30
		::System::Boolean ListenNegative; // 0x31
		::System::Byte _padding0[0x6];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TasksConfig; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEARRIVED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropCurveMoveArrived* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropCurveMoveArrived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEARRIVED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPropCurveMoveArrived* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPropCurveMoveArrived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEARRIVED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
