#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHIOGJMEIEI;

#define MGJLJHECMFL_IPMLHKGFCCP_PHGMLCHCCIP_OFFSET UNITYSDK_OFFSET(0x13D2DA50)
#define MGJLJHECMFL_IPMLHKGFCCP__CTOR_OFFSET UNITYSDK_OFFSET(0x13D2DA40)

inline static constexpr unsigned int MGJLJHECMFL_IPMLHKGFCCP_TypeDefinitionIndex = 80051;

class MGJLJHECMFL_IPMLHKGFCCP : public ::System::Object
{
public:
	::LHIOGJMEIEI* IPMMCGDMODG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJLJHECMFL_IPMLHKGFCCP__CTOR_OFFSET))(this);
	}

	::System::Boolean PHGMLCHCCIP(::LHIOGJMEIEI* BDHOILPIGKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::LHIOGJMEIEI*))((::PBYTE)hIl2Cpp + MGJLJHECMFL_IPMLHKGFCCP_PHGMLCHCCIP_OFFSET))(this, BDHOILPIGKB);
	}
};
