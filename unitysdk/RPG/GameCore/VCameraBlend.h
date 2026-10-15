#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class VCameraBlend; }
namespace System { class String; }

#define RPG_GAMECORE_VCAMERABLEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC79E00)
#define RPG_GAMECORE_VCAMERABLEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC79960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraBlend_TypeDefinitionIndex = 16419;

	class VCameraBlend : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::VCameraBlendType BlendType; // 0x14
		::System::Boolean UseDefaultBlendCurve; // 0x18
		::System::Byte _padding1[0x7];
		::System::String* CustomCurveName; // 0x20
		::RPG::GameCore::FloatCurve* CustomCurveData; // 0x28
		::System::Single BlendTime; // 0x30
		::System::Single FOVSmoothDampTime; // 0x34
		::System::Boolean FrameBlendSwitch; // 0x38
		::System::Byte _padding2[0x3];
		::System::Single FrameBlendDelay; // 0x3C
		::System::Single FrameBlendWeightStart; // 0x40
		::System::Single FrameBlendDuration; // 0x44
		::System::Boolean RadialAimAndLinearDistance; // 0x48
		::System::Boolean DisableCinemachineFoVBlendAdjust; // 0x49
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraBlend* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraBlend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERABLEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
