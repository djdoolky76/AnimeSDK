#pragma once
#include "unitysdk/unitysdk.h"

#define ILALAMHOBPK_JDIFKLEOCPC_OFFSET UNITYSDK_OFFSET(0x13817020)
#define ILALAMHOBPK__CTOR_OFFSET UNITYSDK_OFFSET(0x138171A0)

inline static constexpr unsigned int ILALAMHOBPK_TypeDefinitionIndex = 79124;

class ILALAMHOBPK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILALAMHOBPK__CTOR_OFFSET))(this);
	}

	::System::Single JDIFKLEOCPC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ILALAMHOBPK_JDIFKLEOCPC_OFFSET))(this);
	}
};
