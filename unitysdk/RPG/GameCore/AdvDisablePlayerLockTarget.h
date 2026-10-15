#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvDisablePlayerLockTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVDISABLEPLAYERLOCKTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36D960)
#define RPG_GAMECORE_ADVDISABLEPLAYERLOCKTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D36D970)
#define RPG_GAMECORE_ADVDISABLEPLAYERLOCKTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D36D930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvDisablePlayerLockTarget_TypeDefinitionIndex = 20560;

	class AdvDisablePlayerLockTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISABLEPLAYERLOCKTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvDisablePlayerLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvDisablePlayerLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISABLEPLAYERLOCKTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvDisablePlayerLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvDisablePlayerLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISABLEPLAYERLOCKTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
