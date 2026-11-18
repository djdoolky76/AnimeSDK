#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class AEMACNJMPBP;

#define PEGMFDCJDBC_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1A7ED310)
#define PEGMFDCJDBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7ED350)

inline static constexpr unsigned int PEGMFDCJDBC_TypeDefinitionIndex = 58019;

class PEGMFDCJDBC : public ::JJEJBPGJPJN
{
public:
	::AEMACNJMPBP* IAMFBGKLNJA; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGMFDCJDBC__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGMFDCJDBC_ONCREATEPROPERTY_OFFSET))(this);
	}
};
