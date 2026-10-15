#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropLoadFastDeliverPuzzle; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94E960)
#define RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D94E990)
#define RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D94E910)

namespace RPG::GameCore
{
	class PropLoadFastDeliverPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropLoadFastDeliverPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropLoadFastDeliverPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropLoadFastDeliverPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropLoadFastDeliverPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLOADFASTDELIVERPUZZLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
