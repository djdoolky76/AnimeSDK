#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraEvaluationConditionType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define RPG_GAMECORE_CHIMERAEVALUATIONCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ACCD0)
#define RPG_GAMECORE_CHIMERAEVALUATIONCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5ACB40)

namespace RPG::GameCore
{
	class ChimeraEvaluationCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraEvaluationConditionType Type; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::FixPoint>* Params; // 0x18
		::System::UInt32 RelatedEvaluationID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraEvaluationCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
