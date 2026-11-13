#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RollerCoasterCameraAnchorConfig; }

#define RPG_GAMECORE_ROLLERCOASTERCAMERAANCHORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF3A940)
#define RPG_GAMECORE_ROLLERCOASTERCAMERAANCHORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EF3A7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollerCoasterCameraAnchorConfig_TypeDefinitionIndex = 22400;

	class RollerCoasterCameraAnchorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AnchorID; // 0x10
		::RPG::GameCore::VCameraBlendType BlendType; // 0x14
		::System::Single BlendTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERCAMERAANCHORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RollerCoasterCameraAnchorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RollerCoasterCameraAnchorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERCAMERAANCHORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
