#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareRogueRoomState; }

#define RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E09B0)
#define RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6E09C0)
#define RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6E0970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueRoomState_TypeDefinitionIndex = 21139;

	class ByCompareRogueRoomState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueRoomState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueRoomState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueRoomState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueRoomState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEROOMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
