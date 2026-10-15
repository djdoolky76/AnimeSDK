#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayRandomMissionTalk; }

#define RPG_GAMECORE_PLAYRANDOMMISSIONTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D930830)
#define RPG_GAMECORE_PLAYRANDOMMISSIONTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D930840)
#define RPG_GAMECORE_PLAYRANDOMMISSIONTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D930800)

namespace RPG::GameCore
{
	class PlayRandomMissionTalk : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Single CD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYRANDOMMISSIONTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayRandomMissionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayRandomMissionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYRANDOMMISSIONTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayRandomMissionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayRandomMissionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYRANDOMMISSIONTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
