#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActiveVirtualCameraTargetSelectType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActiveVirtualCamera; }
namespace RPG::GameCore { class ActiveVirtualCamera_PerformanceTransition; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VirtualCameraModeDynamicParam; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA_AFHAEPJKJNO_OFFSET UNITYSDK_OFFSET(0x1D34C620)
#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D34AB80)
#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D34BB00)
#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D34B970)

namespace RPG::GameCore
{
	class ActiveVirtualCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20
		::RPG::GameCore::DynamicString* LevelAreaCameraKey; // 0x28
		::System::Boolean IsEntryPointCamera; // 0x30
		::System::Boolean IsActive; // 0x31
		::System::Byte _padding0[0x2];
		::RPG::GameCore::ActiveVirtualCameraTargetSelectType SelectFollowTargetType; // 0x34
		::System::String* FollowTargetUniqueName; // 0x38
		::System::String* FollowTargetAnchorName; // 0x40
		::RPG::GameCore::DynamicString* LevelAreaFollowKey; // 0x48
		::RPG::GameCore::TargetEvaluator* FollowTarget; // 0x50
		::System::String* FollowTargetAttachPoint; // 0x58
		::RPG::GameCore::ActiveVirtualCameraTargetSelectType SelectLookAtTargetType; // 0x60
		::System::Byte _padding1[0x4];
		::System::String* LookAtTargetUniqueName; // 0x68
		::System::String* LookAtTargetAnchorName; // 0x70
		::RPG::GameCore::DynamicString* LevelAreaLookAtKey; // 0x78
		::RPG::GameCore::TargetEvaluator* LookAtTarget; // 0x80
		::System::String* LookAtTargetAttachPoint; // 0x88
		::System::Boolean WaitBlendFinish; // 0x90
		::System::Boolean BlockInputWhenBlending; // 0x91
		::System::Byte _padding2[0x6];
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x98
		::System::Boolean VCameraDitherNPCOn; // 0xA0
		::System::Byte _padding3[0x3];
		::System::Single VCameraDitherMaxDistance; // 0xA4
		::System::Single VCameraDitherAlphaMin; // 0xA8
		::System::Boolean KeepMainCameraRotation; // 0xAC
		::System::Byte _padding4[0x3];
		::System::Single CenterPosX; // 0xB0
		::System::Single CenterPosY; // 0xB4
		::RPG::GameCore::DynamicFloat* OrthoGraphicSize; // 0xB8
		::System::Boolean DisableProtectWhenBlending; // 0xC0
		::System::Byte _padding5[0x7];
		::RPG::GameCore::VirtualCameraModeDynamicParam* DynamicParams; // 0xC8
		::System::Boolean ImmediatelyRefresh; // 0xD0
		::System::Boolean OverrideBlendConfig; // 0xD1
		::System::Byte _padding6[0x6];
		::RPG::GameCore::DynamicString* OverrideBlendCurveName; // 0xD8
		::RPG::GameCore::DynamicFloat* OverrideBlendTime; // 0xE0
		::System::Boolean EnableCameraProtectAfterBlendOut; // 0xE8
		::System::Boolean EnableDragCamera; // 0xE9
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveVirtualCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveVirtualCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* AFHAEPJKJNO(::System::Boolean a1)
		{
			return ((::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA_AFHAEPJKJNO_OFFSET))(this, a1);
		}

	};
}
