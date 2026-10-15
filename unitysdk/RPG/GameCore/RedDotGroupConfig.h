#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RedDotModuleType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RedDotGroupConfig; }

#define RPG_GAMECORE_REDDOTGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D947BC0)
#define RPG_GAMECORE_REDDOTGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D947A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedDotGroupConfig_TypeDefinitionIndex = 24414;

	class RedDotGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 MaxLength; // 0x10
		::RPG::GameCore::RedDotModuleType RedDotModuleType; // 0x14
		::System::Boolean IsCompatibleLocal; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RedDotGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RedDotGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
