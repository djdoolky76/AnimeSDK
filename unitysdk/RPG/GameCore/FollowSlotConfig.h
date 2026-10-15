#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FollowSideType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FollowSlotConfig; }

#define RPG_GAMECORE_FOLLOWSLOTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E79F0)
#define RPG_GAMECORE_FOLLOWSLOTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E7830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FollowSlotConfig_TypeDefinitionIndex = 15615;

	class FollowSlotConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Angle; // 0x10
		::System::Single Distance; // 0x14
		::RPG::GameCore::FollowSideType Side; // 0x18
		::System::Int32 ID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWSLOTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FollowSlotConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FollowSlotConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWSLOTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
