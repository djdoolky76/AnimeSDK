#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/E6E535EDFA14822E.h"

#define ABC_CUSTOMRENDERPIPELINE_GISETTINGS_CONDITIONALCOPY_OFFSET UNITYSDK_OFFSET(0x27704D0)
#define ABC_CUSTOMRENDERPIPELINE_GISETTINGS_GET_ENABLEGI_OFFSET UNITYSDK_OFFSET(0x1873260)
#define ABC_CUSTOMRENDERPIPELINE_GISETTINGS_GET_MAXREFLECTIONPROBENORMALIZATIONFACTOR_OFFSET UNITYSDK_OFFSET(0x1B0A930)
#define ABC_CUSTOMRENDERPIPELINE_GISETTINGS_GET_MINREFLECTIONPROBENORMALIZATIONFACTOR_OFFSET UNITYSDK_OFFSET(0x233F9C0)
#define ABC_CUSTOMRENDERPIPELINE_GISETTINGS_GET_REFLECTIONPROBENORMALIZATIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x181DE90)
#define ABC_CUSTOMRENDERPIPELINE_GISETTINGS_SET_ENABLEGI_OFFSET UNITYSDK_OFFSET(0x27705A0)
#define ABC_CUSTOMRENDERPIPELINE_GISETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2770570)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int GISettings_TypeDefinitionIndex = 16511;

	class GISettings : public ::B88870E9FB4B8C1A::E6E535EDFA14822E
	{
	public:
		::System::Boolean m_EnableGI; // 0x18
		::System::Boolean m_EnableReflectionProbeNormalization; // 0x19
		::System::Byte _padding0[0x2];
		::System::Single m_MinReflectionProbeNormalizationFactor; // 0x1C
		::System::Single m_MaxReflectionProbeNormalizationFactor; // 0x20
		::System::Single m_ReflectionProbeNormalizationWeight; // 0x24

		::System::Single get_maxReflectionProbeNormalizationFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_GISETTINGS_GET_MAXREFLECTIONPROBENORMALIZATIONFACTOR_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_GISETTINGS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_enableGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_GISETTINGS_GET_ENABLEGI_OFFSET))(this);
		}

		::System::Single get_reflectionProbeNormalizationWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_GISETTINGS_GET_REFLECTIONPROBENORMALIZATIONWEIGHT_OFFSET))(this);
		}

		::System::Single get_minReflectionProbeNormalizationFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_GISETTINGS_GET_MINREFLECTIONPROBENORMALIZATIONFACTOR_OFFSET))(this);
		}

		::System::Void ConditionalCopy(::B88870E9FB4B8C1A::E6E535EDFA14822E* B093D14BEB149AD9)
		{
			return ((::System::Void(*)(::PVOID, ::B88870E9FB4B8C1A::E6E535EDFA14822E*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_GISETTINGS_CONDITIONALCOPY_OFFSET))(this, B093D14BEB149AD9);
		}

		::System::Void set_enableGI(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_GISETTINGS_SET_ENABLEGI_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
