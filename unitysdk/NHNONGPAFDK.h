#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOMOCKMEOCM.h"
#include "unitysdk/System/ValueType.h"

class HJCIHDDGEEB;

#define NHNONGPAFDK_DIMMHHDJALE_OFFSET UNITYSDK_OFFSET(0x808AC0)

inline static constexpr unsigned int NHNONGPAFDK_TypeDefinitionIndex = 86214;

struct alignas(8) NHNONGPAFDK
{
	::HOMOCKMEOCM IDPMIAFLHOO; // 0x10
	::HJCIHDDGEEB* PAMDFMLIIDK; // 0x38

	::System::Boolean DIMMHHDJALE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNONGPAFDK_DIMMHHDJALE_OFFSET))(this);
	}
};
