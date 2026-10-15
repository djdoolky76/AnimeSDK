#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtGridMoveStopType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtGridMoveToTarget; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RTGRIDMOVETOTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5D5A0)
#define RPG_GAMECORE_RTGRIDMOVETOTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA5D6D0)
#define RPG_GAMECORE_RTGRIDMOVETOTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5D560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtGridMoveToTarget_TypeDefinitionIndex = 24115;

	class RtGridMoveToTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* PosTargetType; // 0x20
		::RPG::GameCore::RtGridMoveStopType StopType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* StopDistance; // 0x30
		::RPG::GameCore::DynamicFloat* CustomSpeed; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAbort; // 0x48
		::RPG::GameCore::DynamicFloat* StopDist; // 0x50
		::RPG::GameCore::DynamicFloat* Speed; // 0x58
		::System::Boolean AffectByTimeScale; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGRIDMOVETOTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtGridMoveToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtGridMoveToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGRIDMOVETOTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtGridMoveToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtGridMoveToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGRIDMOVETOTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
