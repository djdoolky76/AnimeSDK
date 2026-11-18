#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define ANGIGKPKELL_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8EAA80)

inline static constexpr unsigned int ANGIGKPKELL_TypeDefinitionIndex = 94228;

struct alignas(4) ANGIGKPKELL
{
	::System::Int32 KMLPFPOCOEO; // 0x10

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGIGKPKELL_JGGHNLBNKHA_OFFSET))(this);
	}
};
