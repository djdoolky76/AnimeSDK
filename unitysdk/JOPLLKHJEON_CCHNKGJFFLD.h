#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JOPLLKHJEON_LGHBIKOOCAC;

#define JOPLLKHJEON_CCHNKGJFFLD_CBOCBKLENLI_OFFSET UNITYSDK_OFFSET(0x15B75A00)
#define JOPLLKHJEON_CCHNKGJFFLD__CTOR_OFFSET UNITYSDK_OFFSET(0x15B759F0)

inline static constexpr unsigned int JOPLLKHJEON_CCHNKGJFFLD_TypeDefinitionIndex = 62010;

class JOPLLKHJEON_CCHNKGJFFLD : public ::System::Object
{
public:
	::JOPLLKHJEON_LGHBIKOOCAC* FGBNBFHOKAA; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPLLKHJEON_CCHNKGJFFLD__CTOR_OFFSET))(this);
	}

	::System::Void CBOCBKLENLI(::System::Boolean DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOPLLKHJEON_CCHNKGJFFLD_CBOCBKLENLI_OFFSET))(this, DJCNCELJPOM);
	}
};
