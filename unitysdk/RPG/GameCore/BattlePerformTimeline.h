#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePerformTimeline; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPERFORMTIMELINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4653C0)
#define RPG_GAMECORE_BATTLEPERFORMTIMELINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4653D0)
#define RPG_GAMECORE_BATTLEPERFORMTIMELINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D465390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePerformTimeline_TypeDefinitionIndex = 23388;

	class BattlePerformTimeline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TimelinePath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMTIMELINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePerformTimeline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePerformTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMTIMELINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePerformTimeline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePerformTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMTIMELINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
