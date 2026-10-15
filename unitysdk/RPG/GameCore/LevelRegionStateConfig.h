#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelRegionStateConditionSet; }
namespace RPG::GameCore { class LevelRegionStateConfig; }

#define RPG_GAMECORE_LEVELREGIONSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CC530)
#define RPG_GAMECORE_LEVELREGIONSTATECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7CC450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionStateConfig_TypeDefinitionIndex = 17385;

	class LevelRegionStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StateID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::LevelRegionStateConditionSet* Condition; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelRegionStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelRegionStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
