#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOKMHLGLIAF.h"

#define BHNABHCOLFD_ALHHKFBPMDD_OFFSET UNITYSDK_OFFSET(0x14252580)
#define BHNABHCOLFD_CDJMJPJMGBB_OFFSET UNITYSDK_OFFSET(0x14252410)
#define BHNABHCOLFD__CTOR_OFFSET UNITYSDK_OFFSET(0x142523F0)

inline static constexpr unsigned int BHNABHCOLFD_TypeDefinitionIndex = 78989;

class BHNABHCOLFD : public ::MOKMHLGLIAF
{
public:
	::System::Void _ctor(::System::Int32 AMCNCFDFMEM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BHNABHCOLFD__CTOR_OFFSET))(this, AMCNCFDFMEM);
	}

	::System::Void CDJMJPJMGBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNABHCOLFD_CDJMJPJMGBB_OFFSET))(this);
	}

	::System::Void ALHHKFBPMDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNABHCOLFD_ALHHKFBPMDD_OFFSET))(this);
	}
};
