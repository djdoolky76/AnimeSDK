#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHIOGJMEIEI;

#define MGJLJHECMFL_IANJHBAIDPF_NBAEFGFIOAP_OFFSET UNITYSDK_OFFSET(0x156A9420)
#define MGJLJHECMFL_IANJHBAIDPF__CTOR_OFFSET UNITYSDK_OFFSET(0x156A9410)

inline static constexpr unsigned int MGJLJHECMFL_IANJHBAIDPF_TypeDefinitionIndex = 80057;

class MGJLJHECMFL_IANJHBAIDPF : public ::System::Object
{
public:
	::System::Int32 LEHABHCOMGH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJLJHECMFL_IANJHBAIDPF__CTOR_OFFSET))(this);
	}

	::System::Boolean NBAEFGFIOAP(::LHIOGJMEIEI* BDHOILPIGKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::LHIOGJMEIEI*))((::PBYTE)hIl2Cpp + MGJLJHECMFL_IANJHBAIDPF_NBAEFGFIOAP_OFFSET))(this, BDHOILPIGKB);
	}
};
