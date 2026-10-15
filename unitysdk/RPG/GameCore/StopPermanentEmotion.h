#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopPermanentEmotion; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STOPPERMANENTEMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB259B0)
#define RPG_GAMECORE_STOPPERMANENTEMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB259C0)
#define RPG_GAMECORE_STOPPERMANENTEMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB25970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopPermanentEmotion_TypeDefinitionIndex = 21889;

	class StopPermanentEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single TransitTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPPERMANENTEMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopPermanentEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopPermanentEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPPERMANENTEMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopPermanentEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopPermanentEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPPERMANENTEMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
