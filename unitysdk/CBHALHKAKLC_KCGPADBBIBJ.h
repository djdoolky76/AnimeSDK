#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CBHALHKAKLC_JLNJPCLBFGL;

#define CBHALHKAKLC_KCGPADBBIBJ_IPINHKGHPDL_OFFSET UNITYSDK_OFFSET(0x168600E0)
#define CBHALHKAKLC_KCGPADBBIBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x168600D0)

inline static constexpr unsigned int CBHALHKAKLC_KCGPADBBIBJ_TypeDefinitionIndex = 55862;

class CBHALHKAKLC_KCGPADBBIBJ : public ::System::Object
{
public:
	::CBHALHKAKLC_JLNJPCLBFGL* FGBNBFHOKAA; // 0x10
	::System::UInt32 KLCELHJKJNA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_KCGPADBBIBJ__CTOR_OFFSET))(this);
	}

	::System::Boolean IPINHKGHPDL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_KCGPADBBIBJ_IPINHKGHPDL_OFFSET))(this);
	}
};
