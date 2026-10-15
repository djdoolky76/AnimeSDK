#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActiveVirtualCamera_PerformanceTransition; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class VCameraBlend_PerformanceTransition; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION_ANOCEFPFCJK_OFFSET UNITYSDK_OFFSET(0x1D31F390)
#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31ED10)
#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D31ED80)
#define RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D31ED30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveVirtualCamera_PerformanceTransition_TypeDefinitionIndex = 21860;

	class ActiveVirtualCamera_PerformanceTransition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20
		::RPG::GameCore::DynamicString* LevelAreaCameraKey; // 0x28
		::System::Boolean IsEntryPointCamera; // 0x30
		::System::Boolean IsActive; // 0x31
		::System::Byte _padding0[0x6];
		::System::String* FollowTargetUniqueName; // 0x38
		::System::String* FollowTargetAttachPoint; // 0x40
		::System::String* FollowTargetAnchorName; // 0x48
		::System::String* LookAtTargetUniqueName; // 0x50
		::System::String* LookAtTargetAnchorName; // 0x58
		::RPG::GameCore::DynamicString* LevelAreaLookAtKey; // 0x60
		::System::Boolean WaitBlendFinish; // 0x68
		::System::Byte _padding1[0x7];
		::RPG::GameCore::VCameraBlend_PerformanceTransition* BlendConfig; // 0x70
		::System::Boolean VCameraDitherNPCOn; // 0x78
		::System::Byte _padding2[0x3];
		::System::Single VCameraDitherMaxDistance; // 0x7C
		::System::Single VCameraDitherAlphaMin; // 0x80
		::System::Boolean KeepMainCameraRotation; // 0x84
		::System::Byte _padding3[0x3];
		::System::Single CenterPosX; // 0x88
		::System::Single CenterPosY; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition* ANOCEFPFCJK(::System::Boolean a1)
		{
			return ((::RPG::GameCore::ActiveVirtualCamera_PerformanceTransition*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEVIRTUALCAMERA_PERFORMANCETRANSITION_ANOCEFPFCJK_OFFSET))(this, a1);
		}

	};
}
