#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define LEIKLAJBCAP_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8EAEA0)
#define LEIKLAJBCAP__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int LEIKLAJBCAP_TypeDefinitionIndex = 94232;

struct alignas(4) LEIKLAJBCAP
{
	::System::UInt32 MNAIIBHLHMA; // 0x10

	::System::Void _ctor(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEIKLAJBCAP__CTOR_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIKLAJBCAP_JGGHNLBNKHA_OFFSET))(this);
	}
};
