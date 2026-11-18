#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DNBCMHOHIEO_ACLCANBCAJH_OFFSET UNITYSDK_OFFSET(0x132A3550)
#define DNBCMHOHIEO_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x132A3560)
#define DNBCMHOHIEO_NPMJHHPNDKF_OFFSET UNITYSDK_OFFSET(0x132A3540)
#define DNBCMHOHIEO__CTOR_OFFSET UNITYSDK_OFFSET(0x132A3530)

inline static constexpr unsigned int DNBCMHOHIEO_TypeDefinitionIndex = 42849;

class DNBCMHOHIEO : public ::System::Object
{
public:
	::System::Int32 _JCGIDDKHAEA_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DNBCMHOHIEO__CTOR_OFFSET))(this, NACGJJKHEJE);
	}

	::System::Boolean NPMJHHPNDKF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBCMHOHIEO_NPMJHHPNDKF_OFFSET))(this);
	}

	::System::Boolean ACLCANBCAJH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBCMHOHIEO_ACLCANBCAJH_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBCMHOHIEO_GKAMCMIJFHJ_OFFSET))(this);
	}
};
