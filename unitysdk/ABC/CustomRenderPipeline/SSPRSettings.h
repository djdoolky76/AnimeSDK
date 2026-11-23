#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/E6E535EDFA14822E.h"

namespace ABC::CustomRenderPipeline { class ReflectionPlane; }

#define ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_CONDITIONALCOPY_OFFSET UNITYSDK_OFFSET(0x2808350)
#define ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1873260)
#define ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_HALFRESOLUTION_OFFSET UNITYSDK_OFFSET(0x167AE10)
#define ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_REFLECTIONPLANES_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_SCREENFADEDIST_OFFSET UNITYSDK_OFFSET(0x19C3B80)
#define ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_STRETCHINTENSITY_OFFSET UNITYSDK_OFFSET(0x23255D0)
#define ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_STRETCHTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x233F9A0)
#define ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_TEMPORALDYNAMICWEIGHT_OFFSET UNITYSDK_OFFSET(0x2264C00)
#define ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_TEMPORALSTATICWEIGHT_OFFSET UNITYSDK_OFFSET(0x173A940)
#define ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2808580)
#define ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_SET_HALFRESOLUTION_OFFSET UNITYSDK_OFFSET(0x28085D0)
#define ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2808500)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int SSPRSettings_TypeDefinitionIndex = 16814;

	class SSPRSettings : public ::B88870E9FB4B8C1A::E6E535EDFA14822E
	{
	public:
		::System::Boolean m_Enabled; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::ABC::CustomRenderPipeline::ReflectionPlane*>* m_ReflectionPlanes; // 0x20
		::System::Single m_StretchIntensity; // 0x28
		::System::Single m_StretchThreshold; // 0x2C
		::System::Boolean m_HalfResolution; // 0x30
		::System::Byte _padding1[0x3];
		::System::Single m_ScreenFadeDist; // 0x34
		::System::Single m_TemporalStaticWeight; // 0x38
		::System::Single m_TemporalDynamicWeight; // 0x3C

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_ENABLED_OFFSET))(this);
		}

		::System::Single get_temporalStaticWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_TEMPORALSTATICWEIGHT_OFFSET))(this);
		}

		::System::Void ConditionalCopy(::B88870E9FB4B8C1A::E6E535EDFA14822E* B093D14BEB149AD9)
		{
			return ((::System::Void(*)(::PVOID, ::B88870E9FB4B8C1A::E6E535EDFA14822E*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_CONDITIONALCOPY_OFFSET))(this, B093D14BEB149AD9);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Single get_screenFadeDist()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_SCREENFADEDIST_OFFSET))(this);
		}

		::System::Void set_halfResolution(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_SET_HALFRESOLUTION_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_stretchThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_STRETCHTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_SET_ENABLED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean get_halfResolution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_HALFRESOLUTION_OFFSET))(this);
		}

		::System::Single get_temporalDynamicWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_TEMPORALDYNAMICWEIGHT_OFFSET))(this);
		}

		::Il2CppArray<::ABC::CustomRenderPipeline::ReflectionPlane*>* get_reflectionPlanes()
		{
			return ((::Il2CppArray<::ABC::CustomRenderPipeline::ReflectionPlane*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_REFLECTIONPLANES_OFFSET))(this);
		}

		::System::Single get_stretchIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_SSPRSETTINGS_GET_STRETCHINTENSITY_OFFSET))(this);
		}
	};
}
