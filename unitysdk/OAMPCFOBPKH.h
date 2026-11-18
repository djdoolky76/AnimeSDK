#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGMHFOHEMHE.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define OAMPCFOBPKH_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8EAEB0)

inline static constexpr unsigned int OAMPCFOBPKH_TypeDefinitionIndex = 93625;

struct alignas(4) OAMPCFOBPKH
{
	::System::Int32 DHAJLFMHDNG; // 0x10
	::System::Int32 DNGDGEMGMMK; // 0x14
	::IGMHFOHEMHE GMOGHFDGEMM; // 0x18
	::System::UInt32 JOABFILLGDD; // 0x1C

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMPCFOBPKH_JGGHNLBNKHA_OFFSET))(this);
	}
};
