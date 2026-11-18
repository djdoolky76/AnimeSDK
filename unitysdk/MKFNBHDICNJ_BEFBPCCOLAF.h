#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MELFFONPBBD;

#define MKFNBHDICNJ_BEFBPCCOLAF_CDOFENIKPBC_OFFSET UNITYSDK_OFFSET(0x12FF92B0)
#define MKFNBHDICNJ_BEFBPCCOLAF__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF92A0)

inline static constexpr unsigned int MKFNBHDICNJ_BEFBPCCOLAF_TypeDefinitionIndex = 61389;

class MKFNBHDICNJ_BEFBPCCOLAF : public ::System::Object
{
public:
	::System::Int32 DPMNNFANIEC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_BEFBPCCOLAF__CTOR_OFFSET))(this);
	}

	::System::Boolean CDOFENIKPBC(::MELFFONPBBD* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MELFFONPBBD*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_BEFBPCCOLAF_CDOFENIKPBC_OFFSET))(this, IPMMCGDMODG);
	}
};
