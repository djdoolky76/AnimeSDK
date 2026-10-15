#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PointEvaluatorByDistanceConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PointDistanceEvaluator; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_POINTDISTANCEEVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93CD30)
#define RPG_GAMECORE_POINTDISTANCEEVALUATOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D93CD40)
#define RPG_GAMECORE_POINTDISTANCEEVALUATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93CCF0)

namespace RPG::GameCore
{
	class PointDistanceEvaluator : public ::RPG::GameCore::PointEvaluatorByDistanceConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTDISTANCEEVALUATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointDistanceEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointDistanceEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTDISTANCEEVALUATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointDistanceEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointDistanceEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTDISTANCEEVALUATOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
