#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxel2DPlatformConfig; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXEL2DPLATFORMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EC660)
#define RPG_GAMECORE_FOURROTATEVOXEL2DPLATFORMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6EC670)
#define RPG_GAMECORE_FOURROTATEVOXEL2DPLATFORMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EC630)

namespace RPG::GameCore
{
	class FourRotateVoxel2DPlatformConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsPlatform; // 0x10
		::System::Boolean IsOverride3DPlatform; // 0x11
		::System::Byte _padding0[0x6];
		::System::String* Platform3DPathRef; // 0x18
		::System::Boolean IsOverridePosition; // 0x20
		::System::Byte _padding1[0x3];
		::RPG::MVector3 OverridePosition; // 0x24
		::System::Boolean IsOverrideRotation; // 0x30
		::System::Byte _padding2[0x3];
		::RPG::MVector3 OverrideRotation; // 0x34
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x40
		::System::Boolean IsTriggerEventWhenLast2DPlatformUpgradeFinish; // 0x48
		::System::Byte _padding3[0x7];
		::RPG::GameCore::LittleGameEvent* OnLast2DPlatformUpgradeFinish; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXEL2DPLATFORMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXEL2DPLATFORMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXEL2DPLATFORMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
