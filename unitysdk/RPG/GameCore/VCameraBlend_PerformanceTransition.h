#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VCameraBlend_PerformanceTransition; }
namespace System { class String; }

#define RPG_GAMECORE_VCAMERABLEND_PERFORMANCETRANSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7A330)
#define RPG_GAMECORE_VCAMERABLEND_PERFORMANCETRANSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC79F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraBlend_PerformanceTransition_TypeDefinitionIndex = 16420;

	class VCameraBlend_PerformanceTransition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::VCameraBlendType BlendType; // 0x14
		::System::Boolean UseDefaultBlendCurve; // 0x18
		::System::Byte _padding1[0x7];
		::System::String* CustomCurveName; // 0x20
		::System::Single BlendTime; // 0x28
		::System::Single FOVSmoothDampTime; // 0x2C
		::System::Boolean FrameBlendSwitch; // 0x30
		::System::Byte _padding2[0x3];
		::System::Single FrameBlendDelay; // 0x34
		::System::Single FrameBlendWeightStart; // 0x38
		::System::Single FrameBlendDuration; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLEND_PERFORMANCETRANSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraBlend_PerformanceTransition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraBlend_PerformanceTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLEND_PERFORMANCETRANSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
