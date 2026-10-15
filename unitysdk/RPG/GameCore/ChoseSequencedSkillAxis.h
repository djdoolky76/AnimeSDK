#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChoseSequencedSkillAxis; }

#define RPG_GAMECORE_CHOSESEQUENCEDSKILLAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B2150)
#define RPG_GAMECORE_CHOSESEQUENCEDSKILLAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B2160)
#define RPG_GAMECORE_CHOSESEQUENCEDSKILLAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B2060)

namespace RPG::GameCore
{
	class ChoseSequencedSkillAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::FixPoint CheckScore; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHOSESEQUENCEDSKILLAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChoseSequencedSkillAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChoseSequencedSkillAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHOSESEQUENCEDSKILLAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChoseSequencedSkillAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChoseSequencedSkillAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHOSESEQUENCEDSKILLAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
