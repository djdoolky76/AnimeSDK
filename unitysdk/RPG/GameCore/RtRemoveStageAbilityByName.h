#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RtRemoveStageAbilityByName; }

#define RPG_GAMECORE_RTREMOVESTAGEABILITYBYNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA62CA0)
#define RPG_GAMECORE_RTREMOVESTAGEABILITYBYNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA62CB0)
#define RPG_GAMECORE_RTREMOVESTAGEABILITYBYNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA62C70)

namespace RPG::GameCore
{
	class RtRemoveStageAbilityByName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* StageAbilityName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTREMOVESTAGEABILITYBYNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtRemoveStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtRemoveStageAbilityByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTREMOVESTAGEABILITYBYNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtRemoveStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtRemoveStageAbilityByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTREMOVESTAGEABILITYBYNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
