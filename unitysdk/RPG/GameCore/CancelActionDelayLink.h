#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CancelActionDelayLink; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CANCELACTIONDELAYLINK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D556D90)
#define RPG_GAMECORE_CANCELACTIONDELAYLINK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D556DA0)
#define RPG_GAMECORE_CANCELACTIONDELAYLINK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D556D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CancelActionDelayLink_TypeDefinitionIndex = 23271;

	class CancelActionDelayLink : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LinkOwner; // 0x18
		::RPG::GameCore::TargetEvaluator* Follower; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CANCELACTIONDELAYLINK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CancelActionDelayLink* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CancelActionDelayLink*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CANCELACTIONDELAYLINK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CancelActionDelayLink* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CancelActionDelayLink*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CANCELACTIONDELAYLINK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
