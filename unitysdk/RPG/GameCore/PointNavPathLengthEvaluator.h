#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PointEvaluatorByDistanceConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PointNavPathLengthEvaluator; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_POINTNAVPATHLENGTHEVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90F7D0)
#define RPG_GAMECORE_POINTNAVPATHLENGTHEVALUATOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D90F7E0)
#define RPG_GAMECORE_POINTNAVPATHLENGTHEVALUATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9102D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PointNavPathLengthEvaluator_TypeDefinitionIndex = 15632;

	class PointNavPathLengthEvaluator : public ::RPG::GameCore::PointEvaluatorByDistanceConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTNAVPATHLENGTHEVALUATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointNavPathLengthEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointNavPathLengthEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTNAVPATHLENGTHEVALUATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointNavPathLengthEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointNavPathLengthEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTNAVPATHLENGTHEVALUATOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
