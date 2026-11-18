#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define IEBIIDMCEAO_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8D6590)

inline static constexpr unsigned int IEBIIDMCEAO_TypeDefinitionIndex = 93351;

struct alignas(4) IEBIIDMCEAO
{
	::System::UInt32 DOPFMGOEFFG; // 0x10
	::System::Int32 BFGMCBLMFMF; // 0x14
	::System::Int32 AKJBJPDIAAA; // 0x18

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBIIDMCEAO_JGGHNLBNKHA_OFFSET))(this);
	}
};
