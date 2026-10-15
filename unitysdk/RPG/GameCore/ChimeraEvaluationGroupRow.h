#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraEvaluationGroupRow; }

#define RPG_GAMECORE_CHIMERAEVALUATIONGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ACED0)
#define RPG_GAMECORE_CHIMERAEVALUATIONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5ACDE0)

namespace RPG::GameCore
{
	class ChimeraEvaluationGroupRow : public ::System::Object
	{
	public:
		::System::UInt32 Sort; // 0x10
		::System::UInt32 EvaluationGroupID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraEvaluationGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraEvaluationGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
