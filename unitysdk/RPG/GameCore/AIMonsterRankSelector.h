#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AICompareStrategy.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIMonsterRankSelector; }

#define RPG_GAMECORE_AIMONSTERRANKSELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33A4C0)
#define RPG_GAMECORE_AIMONSTERRANKSELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D33A4D0)
#define RPG_GAMECORE_AIMONSTERRANKSELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33A490)

namespace RPG::GameCore
{
	class AIMonsterRankSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::RPG::GameCore::AICompareStrategy PropertyStrategy; // 0x10
		::RPG::GameCore::CompareType CompareType; // 0x14
		::RPG::GameCore::FixPoint CompareValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMONSTERRANKSELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIMonsterRankSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIMonsterRankSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMONSTERRANKSELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIMonsterRankSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIMonsterRankSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIMONSTERRANKSELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
