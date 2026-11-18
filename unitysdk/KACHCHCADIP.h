#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLBBAGKPJEO.h"
#include "unitysdk/System/ValueType.h"

class OMKHOPABFDJ;

#define KACHCHCADIP_FIKDKHAGJBB_OFFSET UNITYSDK_OFFSET(0x3CED50)

inline static constexpr unsigned int KACHCHCADIP_TypeDefinitionIndex = 18205;

struct alignas(4) KACHCHCADIP
{
	::System::Int32 FGHMEEEHCDC; // 0x10
	::System::Int32 OHOGDOMNHNK; // 0x14
	::LLBBAGKPJEO HJICDMPHLCH; // 0x18

	::OMKHOPABFDJ* FIKDKHAGJBB()
	{
		return ((::OMKHOPABFDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KACHCHCADIP_FIKDKHAGJBB_OFFSET))(this);
	}
};
