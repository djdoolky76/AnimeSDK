#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class WaitAbilityStartTimeStamp; }

#define RPG_GAMECORE_WAITABILITYSTARTTIMESTAMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC658E0)
#define RPG_GAMECORE_WAITABILITYSTARTTIMESTAMP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC65950)
#define RPG_GAMECORE_WAITABILITYSTARTTIMESTAMP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC65850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAbilityStartTimeStamp_TypeDefinitionIndex = 22692;

	class WaitAbilityStartTimeStamp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* WaitTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITABILITYSTARTTIMESTAMP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAbilityStartTimeStamp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAbilityStartTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITABILITYSTARTTIMESTAMP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitAbilityStartTimeStamp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitAbilityStartTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITABILITYSTARTTIMESTAMP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
