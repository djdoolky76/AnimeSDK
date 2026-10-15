#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraEvaluationCondition; }
namespace RPG::GameCore { class ChimeraEvaluationConfig; }

#define RPG_GAMECORE_CHIMERAEVALUATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ACDD0)
#define RPG_GAMECORE_CHIMERAEVALUATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5ACCE0)

namespace RPG::GameCore
{
	class ChimeraEvaluationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraEvaluationCondition*>* ChimeraEvaluationConditions; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraEvaluationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraEvaluationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
