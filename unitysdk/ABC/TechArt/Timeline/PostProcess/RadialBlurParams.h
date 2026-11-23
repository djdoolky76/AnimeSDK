#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ABC_TECHART_TIMELINE_POSTPROCESS_RADIALBLURPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x2892200)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int RadialBlurParams_TypeDefinitionIndex = 16178;

	struct alignas(4) RadialBlurParams
	{
		::System::Boolean OverrideRadialBlurX; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single RadialBlurX; // 0x14
		::System::Boolean OverrideRadialBlurY; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single RadialBlurY; // 0x1C
		::System::Boolean OverrideRadialBlurRadius; // 0x20
		::System::Byte _padding2[0x3];
		::System::Single RadialBlurRadius; // 0x24
		::System::Boolean OverrideRadialIteration; // 0x28
		::System::Byte _padding3[0x3];
		::System::Int32 RadialIteration; // 0x2C
		::System::Boolean OverrideRadialStart; // 0x30
		::System::Byte _padding4[0x3];
		::System::Single RadialStart; // 0x34
		::System::Boolean OverrideRadialFeather; // 0x38
		::System::Byte _padding5[0x3];
		::System::Single RadialFeather; // 0x3C
		::System::Boolean RadialBlurBounded; // 0x40
		::System::Boolean EnableDirectionBlur; // 0x41
		::System::Boolean OverrideDirectionBlurIteration; // 0x42
		::System::Byte _padding6[0x1];
		::System::Int32 DirectionBlurIteration; // 0x44
		::System::Boolean OverrideDirectionBlurRadius; // 0x48
		::System::Byte _padding7[0x3];
		::System::Single DirectionBlurRadius; // 0x4C
		::System::Boolean OverrideDirectionAngle; // 0x50
		::System::Byte _padding8[0x3];
		::System::Single DirectionAngle; // 0x54
		::System::Boolean OverrideExtrusionXIntensity; // 0x58
		::System::Byte _padding9[0x3];
		::System::Single ExtrusionXIntensity; // 0x5C
		::System::Boolean OverrideExtrusionYIntensity; // 0x60
		::System::Byte _padding10[0x3];
		::System::Single ExtrusionYIntensity; // 0x64

		::System::Void _ctor(::System::Boolean A267FE551C5A0512)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_RADIALBLURPARAMS__CTOR_OFFSET))(this, A267FE551C5A0512);
		}
	};
}
