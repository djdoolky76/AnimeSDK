#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleRemoveSkill; }

#define RPG_GAMECORE_MARBLEREMOVESKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D845CA0)
#define RPG_GAMECORE_MARBLEREMOVESKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D845CB0)
#define RPG_GAMECORE_MARBLEREMOVESKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D845C50)

namespace RPG::GameCore
{
	class MarbleRemoveSkill : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 SkillId; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREMOVESKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleRemoveSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleRemoveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREMOVESKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleRemoveSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleRemoveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREMOVESKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
