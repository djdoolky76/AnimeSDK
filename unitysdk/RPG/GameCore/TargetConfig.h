#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityTargetType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetConfig; }

#define RPG_GAMECORE_TARGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2C820)
#define RPG_GAMECORE_TARGETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB2C680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetConfig_TypeDefinitionIndex = 15642;

	class TargetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AbilityTargetType TargetType; // 0x10
		::System::Boolean AllowUnselectableTarget; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 MinTargetCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
