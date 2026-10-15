#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitRogueObjectRewardRunout; }

#define RPG_GAMECORE_WAITROGUEOBJECTREWARDRUNOUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC726E0)
#define RPG_GAMECORE_WAITROGUEOBJECTREWARDRUNOUT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC726F0)
#define RPG_GAMECORE_WAITROGUEOBJECTREWARDRUNOUT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC726A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRogueObjectRewardRunout_TypeDefinitionIndex = 20492;

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
