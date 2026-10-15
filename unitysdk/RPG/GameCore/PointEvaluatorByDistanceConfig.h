#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PointEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PointEvaluatorByDistanceConfig; }
namespace System { class String; }

#define RPG_GAMECORE_POINTEVALUATORBYDISTANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93CE30)
#define RPG_GAMECORE_POINTEVALUATORBYDISTANCECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D93D0A0)
#define RPG_GAMECORE_POINTEVALUATORBYDISTANCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93CE40)

namespace RPG::GameCore
{
	class PointEvaluatorByDistanceConfig : public ::RPG::GameCore::PointEvaluatorConfig
	{
	public:
		::System::String* DistanceScoreTemplate; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORBYDISTANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointEvaluatorByDistanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointEvaluatorByDistanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORBYDISTANCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointEvaluatorByDistanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointEvaluatorByDistanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORBYDISTANCECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
