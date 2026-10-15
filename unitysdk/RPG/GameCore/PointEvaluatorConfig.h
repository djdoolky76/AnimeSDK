#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PointEvaluatorConfig; }

#define RPG_GAMECORE_POINTEVALUATORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93D240)
#define RPG_GAMECORE_POINTEVALUATORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D93D540)
#define RPG_GAMECORE_POINTEVALUATORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93D250)

namespace RPG::GameCore
{
	class PointEvaluatorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointEvaluatorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PointEvaluatorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PointEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
