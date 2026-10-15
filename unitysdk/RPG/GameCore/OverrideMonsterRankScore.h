#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideMonsterRankScore; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OVERRIDEMONSTERRANKSCORE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E8990)
#define RPG_GAMECORE_OVERRIDEMONSTERRANKSCORE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E89A0)
#define RPG_GAMECORE_OVERRIDEMONSTERRANKSCORE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E8960)

namespace RPG::GameCore
{
	class OverrideMonsterRankScore : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRevert; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::FixPoint RankScore; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEMONSTERRANKSCORE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideMonsterRankScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideMonsterRankScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEMONSTERRANKSCORE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideMonsterRankScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideMonsterRankScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEMONSTERRANKSCORE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
