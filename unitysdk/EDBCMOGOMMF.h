#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define EDBCMOGOMMF_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8F8750)

inline static constexpr unsigned int EDBCMOGOMMF_TypeDefinitionIndex = 93670;

struct alignas(4) EDBCMOGOMMF
{
	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBCMOGOMMF_JGGHNLBNKHA_OFFSET))(this);
	}
};
