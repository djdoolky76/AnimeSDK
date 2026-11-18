#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class APFMDJMLMFH;
class MELFFONPBBD;

#define MKFNBHDICNJ_PLDNOBNGOBN_AIEFAEKGBJC_OFFSET UNITYSDK_OFFSET(0x12D90EA0)
#define MKFNBHDICNJ_PLDNOBNGOBN__CTOR_OFFSET UNITYSDK_OFFSET(0x12D90E90)

inline static constexpr unsigned int MKFNBHDICNJ_PLDNOBNGOBN_TypeDefinitionIndex = 61405;

class MKFNBHDICNJ_PLDNOBNGOBN : public ::System::Object
{
public:
	::APFMDJMLMFH* DEKJDEPKKLH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_PLDNOBNGOBN__CTOR_OFFSET))(this);
	}

	::System::Boolean AIEFAEKGBJC(::MELFFONPBBD* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MELFFONPBBD*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_PLDNOBNGOBN_AIEFAEKGBJC_OFFSET))(this, LJBPECKCCEA);
	}
};
