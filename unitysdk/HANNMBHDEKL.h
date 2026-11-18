#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JDJOPLOGHEM.h"
#include "unitysdk/MOLGPIOBMFI.h"
#include "unitysdk/NHKLBKEABJB.h"

#define HANNMBHDEKL_ACLHCBONOEC_1_OFFSET UNITYSDK_OFFSET(0x13E0A9D0)
#define HANNMBHDEKL_ACLHCBONOEC_OFFSET UNITYSDK_OFFSET(0x13E0A940)

inline static constexpr unsigned int HANNMBHDEKL_TypeDefinitionIndex = 61976;

class HANNMBHDEKL : public ::System::Object
{
public:
	static ::System::Boolean ACLHCBONOEC(::MOLGPIOBMFI& FLPDANMPEFJ, ::JDJOPLOGHEM& OPAPEIHNDJA)
	{
		return ((::System::Boolean(*)(::MOLGPIOBMFI&, ::JDJOPLOGHEM&))((::PBYTE)hIl2Cpp + HANNMBHDEKL_ACLHCBONOEC_OFFSET))(FLPDANMPEFJ, OPAPEIHNDJA);
	}

	static ::System::Boolean ACLHCBONOEC_1(::MOLGPIOBMFI& FLPDANMPEFJ, ::NHKLBKEABJB& FHIMMPKHPOJ, ::JDJOPLOGHEM& OPAPEIHNDJA)
	{
		return ((::System::Boolean(*)(::MOLGPIOBMFI&, ::NHKLBKEABJB&, ::JDJOPLOGHEM&))((::PBYTE)hIl2Cpp + HANNMBHDEKL_ACLHCBONOEC_1_OFFSET))(FLPDANMPEFJ, FHIMMPKHPOJ, OPAPEIHNDJA);
	}
};
