#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphRoamingConfig; }

#define RPG_GAMECORE_PHOTOGRAPHROAMINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D912710)
#define RPG_GAMECORE_PHOTOGRAPHROAMINGCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D912570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphRoamingConfig_TypeDefinitionIndex = 19056;

	class PhotoGraphRoamingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 RoamingStyle; // 0x10
		::System::Single InitFovRatio; // 0x14
		::System::Single MaxFov; // 0x18
		::System::Single MinFov; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHROAMINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphRoamingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphRoamingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHROAMINGCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
