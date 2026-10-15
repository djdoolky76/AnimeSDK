#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SpecialBpFeature; }
namespace RPG::GameCore { class StackAdditionalTeamBoostPoint; }

#define RPG_GAMECORE_STACKADDITIONALTEAMBOOSTPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB02560)
#define RPG_GAMECORE_STACKADDITIONALTEAMBOOSTPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB02570)
#define RPG_GAMECORE_STACKADDITIONALTEAMBOOSTPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB02520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackAdditionalTeamBoostPoint_TypeDefinitionIndex = 23552;

	class StackAdditionalTeamBoostPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::RPG::GameCore::SpecialBpFeature* OverrideBpFeature; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKADDITIONALTEAMBOOSTPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackAdditionalTeamBoostPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackAdditionalTeamBoostPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKADDITIONALTEAMBOOSTPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackAdditionalTeamBoostPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackAdditionalTeamBoostPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKADDITIONALTEAMBOOSTPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
