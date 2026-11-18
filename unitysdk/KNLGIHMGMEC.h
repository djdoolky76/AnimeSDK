#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAKCENDFHAN.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define KNLGIHMGMEC_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8B8320)

inline static constexpr unsigned int KNLGIHMGMEC_TypeDefinitionIndex = 93992;

struct alignas(8) KNLGIHMGMEC
{
	::System::Int32 KJACOGBDJFL; // 0x10
	::System::Int32 KIFJPFIOEEC; // 0x14
	::System::UInt32 AOGNNJLKHGL; // 0x18
	::KAKCENDFHAN BHMLIFIKCEL; // 0x1C
	::Il2CppArray<::System::Int32>* IOIPEMFAGFI; // 0x20
	::System::Boolean LCGNHLHPDLE; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 KMLPFPOCOEO; // 0x2C

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLGIHMGMEC_JGGHNLBNKHA_OFFSET))(this);
	}
};
