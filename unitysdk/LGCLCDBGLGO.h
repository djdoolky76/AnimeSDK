#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LGCLCDBGLGO_HLLPGHPBNHL_OFFSET UNITYSDK_OFFSET(0x1D99B520)
#define LGCLCDBGLGO_LGAPBFNKAIH_OFFSET UNITYSDK_OFFSET(0x1D99B490)
#define LGCLCDBGLGO_NKCDDBJONCC_OFFSET UNITYSDK_OFFSET(0x1D99B4E0)
#define LGCLCDBGLGO_OHAEJGLIGOJ_OFFSET UNITYSDK_OFFSET(0x1D99B570)

inline static constexpr unsigned int LGCLCDBGLGO_TypeDefinitionIndex = 94068;

class LGCLCDBGLGO : public ::System::Object
{
public:
	// static const ::System::Int32 KINIEBKNJPI = 0x16; // 0x0
	// static const ::System::Int32 GMHAJBPMJHN = 0x1; // 0x0
	// static const ::System::Int32 DPFFAKHJKJF = 0x8; // 0x0
	// static const ::System::Int32 BHFANGLEPPE = 0x20; // 0x0

	static ::System::Boolean LGAPBFNKAIH(::System::Int32 KMOHKCADPNA)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LGCLCDBGLGO_LGAPBFNKAIH_OFFSET))(KMOHKCADPNA);
	}

	static ::System::Boolean NKCDDBJONCC(::System::Int32 KMOHKCADPNA)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LGCLCDBGLGO_NKCDDBJONCC_OFFSET))(KMOHKCADPNA);
	}

	static ::System::Boolean HLLPGHPBNHL(::System::Int32 KMOHKCADPNA)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LGCLCDBGLGO_HLLPGHPBNHL_OFFSET))(KMOHKCADPNA);
	}

	static ::System::Boolean OHAEJGLIGOJ(::System::Int32 KMOHKCADPNA)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LGCLCDBGLGO_OHAEJGLIGOJ_OFFSET))(KMOHKCADPNA);
	}
};
