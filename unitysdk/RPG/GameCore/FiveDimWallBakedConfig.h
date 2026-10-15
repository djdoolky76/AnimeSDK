#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimWallBakedConfig; }

#define RPG_GAMECORE_FIVEDIMWALLBAKEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B4F60)
#define RPG_GAMECORE_FIVEDIMWALLBAKEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69C290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimWallBakedConfig_TypeDefinitionIndex = 16654;

	class FiveDimWallBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single QueryWallOffset; // 0x10
		::System::Single QueryWallMinHeight; // 0x14
		::System::Single WallSlideSpeed; // 0x18
		::System::Single WallSlideGravity; // 0x1C
		::RPG::MVector3 WallJumpInitVelocity; // 0x20
		::System::Single WallJumpUpwardSpeed; // 0x2C
		::System::Single JumpCutExemptSpeed; // 0x30
		::System::Single JumpCutMinHeight; // 0x34
		::System::Single UpwardJumpCutExemptSpeed; // 0x38
		::System::Single UpwardJumpCutMinHeight; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWALLBAKEDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimWallBakedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimWallBakedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWALLBAKEDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
