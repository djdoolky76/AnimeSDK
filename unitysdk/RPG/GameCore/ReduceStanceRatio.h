#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ReduceStanceRatio; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REDUCESTANCERATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D948210)
#define RPG_GAMECORE_REDUCESTANCERATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D948220)
#define RPG_GAMECORE_REDUCESTANCERATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9481D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReduceStanceRatio_TypeDefinitionIndex = 23566;

	class ReduceStanceRatio : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ReduceValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDUCESTANCERATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReduceStanceRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReduceStanceRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDUCESTANCERATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReduceStanceRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReduceStanceRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDUCESTANCERATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
