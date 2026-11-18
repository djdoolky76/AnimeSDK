#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIOALOBJOAE_MLGEMDGKLHG.h"
#include "unitysdk/System/Object.h"

class JHBAFLMDCCL;
class LDGHPCBNKMP;

#define LDGHPCBNKMP_PGGIKFHFJCB_KFGPLCPCGMN_OFFSET UNITYSDK_OFFSET(0x15BC6B90)
#define LDGHPCBNKMP_PGGIKFHFJCB__CTOR_OFFSET UNITYSDK_OFFSET(0x15BBC010)

inline static constexpr unsigned int LDGHPCBNKMP_PGGIKFHFJCB_TypeDefinitionIndex = 72764;

class LDGHPCBNKMP_PGGIKFHFJCB : public ::System::Object
{
public:
	::LDGHPCBNKMP* KLHPEBKNIFB; // 0x10
	::DIOALOBJOAE_MLGEMDGKLHG BPPBGDKJBNC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_PGGIKFHFJCB__CTOR_OFFSET))(this);
	}

	::System::Boolean KFGPLCPCGMN(::JHBAFLMDCCL* ODPEJNDHNNA)
	{
		return ((::System::Boolean(*)(::PVOID, ::JHBAFLMDCCL*))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_PGGIKFHFJCB_KFGPLCPCGMN_OFFSET))(this, ODPEJNDHNNA);
	}
};
