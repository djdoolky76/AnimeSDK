#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_PPFILTERSTACK_RADIALBLURPARAMETER_CTOR_1_OFFSET UNITYSDK_OFFSET(0xF50D0)
#define RPG_CUSTOMRP_PPFILTERSTACK_RADIALBLURPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0xF5060)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PPFilterStack_RadialBlurParameter_TypeDefinitionIndex = 51855;

	struct alignas(4) PPFilterStack_RadialBlurParameter
	{
		::System::Boolean RadialBlurMethodOverrideState; // 0x10
		::System::Boolean RadialBlurXOverrideState; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single RadialBlurX; // 0x14
		::System::Boolean RadialBlurYOverrideState; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single RadialBlurY; // 0x1C
		::System::Boolean RadialBlurRadiusOverrideState; // 0x20
		::System::Byte _padding2[0x3];
		::System::Single RadialBlurRadius; // 0x24
		::System::Boolean RadialIterationOverrideState; // 0x28
		::System::Byte _padding3[0x3];
		::System::Single RadialIteration; // 0x2C
		::System::Boolean RadialBlurStartOverrideState; // 0x30
		::System::Byte _padding4[0x3];
		::System::Single RadialBlurStart; // 0x34
		::System::Boolean RadialBlurFeatherOverrideState; // 0x38
		::System::Byte _padding5[0x3];
		::System::Single RadialBlurFeather; // 0x3C
		::System::Boolean enableDirectionBlur; // 0x40
		::System::Boolean directionBlurDegreeOverrideState; // 0x41
		::System::Byte _padding6[0x2];
		::System::Single directionBlurDegree; // 0x44
		::System::Boolean directionBlurAngleOverrideState; // 0x48
		::System::Byte _padding7[0x3];
		::System::Single directionBlurAngle; // 0x4C
		::System::Boolean directionBlurOffsetOverrideState; // 0x50
		::System::Byte _padding8[0x3];
		::System::Single directionBlurOffset; // 0x54
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_RADIALBLURPARAMETER_CTOR_OFFSET))(this, a1);
		}

		/*
		::System::Void _ctor_1(::RPG::CustomRP::PPFilterStack_RadialBlurParameter a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_RadialBlurParameter, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_RADIALBLURPARAMETER_CTOR_1_OFFSET))(this, a1, a2);
		}
		*/

	};
}
