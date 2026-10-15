#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitRogueObjectRewardRunout; }

#define RPG_GAMECORE_WAITROGUEOBJECTREWARDRUNOUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9FF90)
#define RPG_GAMECORE_WAITROGUEOBJECTREWARDRUNOUT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9FFA0)
#define RPG_GAMECORE_WAITROGUEOBJECTREWARDRUNOUT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9FF50)

namespace RPG::GameCore
{
	class WaitRogueObjectRewardRunout : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEOBJECTREWARDRUNOUT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueObjectRewardRunout* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueObjectRewardRunout*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEOBJECTREWARDRUNOUT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRogueObjectRewardRunout* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRogueObjectRewardRunout*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROGUEOBJECTREWARDRUNOUT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
