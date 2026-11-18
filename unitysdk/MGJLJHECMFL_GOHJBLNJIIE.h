#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHIOGJMEIEI;

#define MGJLJHECMFL_GOHJBLNJIIE_CBNGDAMFDBF_OFFSET UNITYSDK_OFFSET(0x151CF420)
#define MGJLJHECMFL_GOHJBLNJIIE__CTOR_OFFSET UNITYSDK_OFFSET(0x151CF410)

inline static constexpr unsigned int MGJLJHECMFL_GOHJBLNJIIE_TypeDefinitionIndex = 80053;

class MGJLJHECMFL_GOHJBLNJIIE : public ::System::Object
{
public:
	::LHIOGJMEIEI* IPMMCGDMODG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJLJHECMFL_GOHJBLNJIIE__CTOR_OFFSET))(this);
	}

	::System::Boolean CBNGDAMFDBF(::LHIOGJMEIEI* BDHOILPIGKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::LHIOGJMEIEI*))((::PBYTE)hIl2Cpp + MGJLJHECMFL_GOHJBLNJIIE_CBNGDAMFDBF_OFFSET))(this, BDHOILPIGKB);
	}
};
