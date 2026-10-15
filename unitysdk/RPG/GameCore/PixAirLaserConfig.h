#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirLaserConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRLASERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91C500)
#define RPG_GAMECORE_PIXAIRLASERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D91C310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirLaserConfig_TypeDefinitionIndex = 21399;

	class PixAirLaserConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LaserHeadPrefabPath; // 0x10
		::System::String* LaserTrailPrefabPath; // 0x18
		::System::String* LaserHitPrefabPath; // 0x20
		::RPG::GameCore::FixPoint Duration; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRLASERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirLaserConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirLaserConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRLASERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
