#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraFollowClampMask.h"
#include "unitysdk/RPG/GameCore/FiveDimLevelCameraType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBaseCameraConfig; }
namespace RPG::GameCore { class FiveDimCameraDOFConfig; }
namespace RPG::GameCore { class FiveDimCameraFollowConfig; }
namespace RPG::GameCore { class FiveDimCameraLensConfig; }
namespace RPG::GameCore { class FiveDimCameraObserveConfig; }
namespace RPG::GameCore { class FiveDimCameraSimpleOverrideFollow; }
namespace RPG::GameCore { class FiveDimVCameraBlendConfig; }

#define RPG_GAMECORE_FIVEDIMBASECAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D683130)
#define RPG_GAMECORE_FIVEDIMBASECAMERACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D683160)
#define RPG_GAMECORE_FIVEDIMBASECAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D682E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBaseCameraConfig_TypeDefinitionIndex = 18624;

	class FiveDimBaseCameraConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::FiveDimLevelCameraType Type; // 0x10
		::RPG::MVector3 LocalPosition; // 0x14
		::RPG::MVector3 LocalRotation; // 0x20
		::System::Boolean UseDefaultLens; // 0x2C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FiveDimCameraLensConfig* Lens; // 0x30
		::System::Boolean UseDefaultFollow; // 0x38
		::System::Boolean UseSimpleOverrideFollow; // 0x39
		::System::Byte _padding1[0x6];
		::RPG::GameCore::FiveDimCameraSimpleOverrideFollow* SimpleOverrideFollow; // 0x40
		::RPG::GameCore::FiveDimCameraFollowConfig* Follow; // 0x48
		::RPG::GameCore::FiveDimCameraFollowConfig* BakedFollow; // 0x50
		::RPG::GameCore::FiveDimCameraFollowClampMask FollowClampMask; // 0x58
		::System::Boolean UseDefaultObserve; // 0x5C
		::System::Boolean UseMinimalObserve; // 0x5D
		::System::Byte _padding2[0x2];
		::RPG::GameCore::FiveDimCameraObserveConfig* Observe; // 0x60
		::RPG::GameCore::FiveDimCameraObserveConfig* BakedObserve; // 0x68
		::System::Boolean UseDefaultBlend; // 0x70
		::System::Byte _padding3[0x7];
		::RPG::GameCore::FiveDimVCameraBlendConfig* Blend; // 0x78
		::System::UInt32 BlendPivot; // 0x80
		::System::Boolean UseDefaultDOF; // 0x84
		::System::Byte _padding4[0x3];
		::RPG::GameCore::FiveDimCameraDOFConfig* DOFConfig; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASECAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBaseCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBaseCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASECAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBaseCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBaseCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASECAMERACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
