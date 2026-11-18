#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define ENADPEHBIHM_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x95DCE0)

inline static constexpr unsigned int ENADPEHBIHM_TypeDefinitionIndex = 94902;

struct alignas(4) ENADPEHBIHM
{
	::System::UInt32 BKLGNCBNEGM; // 0x10

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENADPEHBIHM_JGGHNLBNKHA_OFFSET))(this);
	}
};
