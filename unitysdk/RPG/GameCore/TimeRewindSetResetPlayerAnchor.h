#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TimeRewindSetResetPlayerAnchor; }

#define RPG_GAMECORE_TIMEREWINDSETRESETPLAYERANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5BAC0)
#define RPG_GAMECORE_TIMEREWINDSETRESETPLAYERANCHOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5BAD0)
#define RPG_GAMECORE_TIMEREWINDSETRESETPLAYERANCHOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5BA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindSetResetPlayerAnchor_TypeDefinitionIndex = 20643;

	class TimeRewindSetResetPlayerAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* AnchorIDs; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSETRESETPLAYERANCHOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindSetResetPlayerAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindSetResetPlayerAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSETRESETPLAYERANCHOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindSetResetPlayerAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindSetResetPlayerAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSETRESETPLAYERANCHOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
