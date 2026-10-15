#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuteEntitySound; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MUTEENTITYSOUND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CF6F0)
#define RPG_GAMECORE_MUTEENTITYSOUND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8CF700)
#define RPG_GAMECORE_MUTEENTITYSOUND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8CF6C0)

namespace RPG::GameCore
{
	class MuteEntitySound : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsReset; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTEENTITYSOUND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuteEntitySound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuteEntitySound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTEENTITYSOUND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuteEntitySound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuteEntitySound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTEENTITYSOUND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
