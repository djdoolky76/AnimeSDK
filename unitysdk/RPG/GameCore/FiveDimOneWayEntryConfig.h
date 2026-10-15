#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimOneWayEntryConfig; }
namespace RPG::GameCore { class LittleGameTriggerConfig; }

#define RPG_GAMECORE_FIVEDIMONEWAYENTRYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A1CA0)
#define RPG_GAMECORE_FIVEDIMONEWAYENTRYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A1A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimOneWayEntryConfig_TypeDefinitionIndex = 18537;

	class FiveDimOneWayEntryConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameTriggerConfig* TriggerConfig; // 0x10
		::RPG::MVector3 TargetPosition; // 0x18
		::RPG::MVector3 TargetRotation; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMONEWAYENTRYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimOneWayEntryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimOneWayEntryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMONEWAYENTRYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
