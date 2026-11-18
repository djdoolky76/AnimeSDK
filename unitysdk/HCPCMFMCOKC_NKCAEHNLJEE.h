#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/IndicatorLightData.h"
#include "unitysdk/MoleMole/Config/IndicatorLightType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCPCMFMCOKC_NKCAEHNLJEE__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0F8A0)

inline static constexpr unsigned int HCPCMFMCOKC_NKCAEHNLJEE_TypeDefinitionIndex = 87749;

class HCPCMFMCOKC_NKCAEHNLJEE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::IndicatorLightData>* JMINOGAOFIL; // 0x10
	::System::Single CCDNKBONPLB; // 0x18
	::MoleMole::Config::IndicatorLightType NOOLOILNGPL; // 0x1C
	::System::Int32 BELNJJKMMJP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPCMFMCOKC_NKCAEHNLJEE__CTOR_OFFSET))(this);
	}
};
