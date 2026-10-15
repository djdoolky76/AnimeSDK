#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_REFLECTIONSETTING_SSRSETTINGDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC6CC30)

namespace RPG::CustomRP
{
	class ReflectionSetting_SSRSettingData : public ::System::Object
	{
	public:
		::System::Boolean IsMobile; // 0x10
		::System::Boolean HizTrace; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single RenderScale; // 0x14
		::System::Int32 RenderHeightClamp; // 0x18
		::System::Int32 NumSteps; // 0x1C
		::System::Int32 NumRays; // 0x20
		::System::Int32 NumResolve; // 0x24
		::System::Single RoughnessBias; // 0x28
		::System::Single ScreenFadeDist; // 0x2C
		::System::Boolean UsePreviousFrameColor; // 0x30
		::System::Boolean EnableSpatialFilter; // 0x31
		::System::Boolean EnableBilateralFilter; // 0x32
		::System::Boolean EnableSDFTrace; // 0x33
		::System::Int32 MaxRaysPerPixel; // 0x34
		::System::Single TemporalStaticWeight; // 0x38
		::System::Single TemporalDynamicWeight; // 0x3C
		::System::Single Thickness; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_REFLECTIONSETTING_SSRSETTINGDATA_CTOR_OFFSET))(this);
		}

	};
}
