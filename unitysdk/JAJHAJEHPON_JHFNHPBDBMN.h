#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EBKECLHNIMA;

#define JAJHAJEHPON_JHFNHPBDBMN_PAEPAMNNBJF_OFFSET UNITYSDK_OFFSET(0x18720A90)
#define JAJHAJEHPON_JHFNHPBDBMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1871E820)

inline static constexpr unsigned int JAJHAJEHPON_JHFNHPBDBMN_TypeDefinitionIndex = 55485;

class JAJHAJEHPON_JHFNHPBDBMN : public ::System::Object
{
public:
	::System::Int32 NCCGBMNNODJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJHAJEHPON_JHFNHPBDBMN__CTOR_OFFSET))(this);
	}

	::System::Boolean PAEPAMNNBJF(::EBKECLHNIMA* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::EBKECLHNIMA*))((::PBYTE)hIl2Cpp + JAJHAJEHPON_JHFNHPBDBMN_PAEPAMNNBJF_OFFSET))(this, HAAEBCOBKFF);
	}
};
