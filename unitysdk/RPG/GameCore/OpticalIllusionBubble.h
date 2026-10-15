#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpticalIllusionBubble; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OPTICALILLUSIONBUBBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E3E20)
#define RPG_GAMECORE_OPTICALILLUSIONBUBBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E3E50)
#define RPG_GAMECORE_OPTICALILLUSIONBUBBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E3DD0)

namespace RPG::GameCore
{
	class OpticalIllusionBubble : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::UInt32 SentenceId; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONBUBBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpticalIllusionBubble* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpticalIllusionBubble*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONBUBBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpticalIllusionBubble* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpticalIllusionBubble*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONBUBBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
