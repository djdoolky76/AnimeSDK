#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropMoveToMoveMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropMoveToV2; }
namespace RPG::GameCore { class PropMoveToV2TargetBase; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PROPMOVETOV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1D950150)
#define RPG_GAMECORE_PROPMOVETOV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9501F0)
#define RPG_GAMECORE_PROPMOVETOV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D950090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropMoveToV2_TypeDefinitionIndex = 21964;

	class PropMoveToV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PropMoveToV2TargetBase* MoveToTarget; // 0x18
		::System::Boolean WaitFinish; // 0x20
		::System::Boolean UseCurveData; // 0x21
		::System::Byte _padding0[0x6];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::PropMoveToMoveMode Mode; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* Duration; // 0x38
		::RPG::GameCore::DynamicFloat* Speed; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReachTarget; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropMoveToV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropMoveToV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropMoveToV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropMoveToV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
