#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define KDACPOHLKJL_JAAEJCJJDNB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7B0220)

inline static constexpr unsigned int KDACPOHLKJL_JAAEJCJJDNB_TypeDefinitionIndex = 65696;

struct alignas(8) KDACPOHLKJL_JAAEJCJJDNB
{
	::System::Boolean FAHODHFIFOI; // 0x10
	::System::Byte _padding0[0x7];
	::System::Object* LGLNPFAGFFN; // 0x18
	::System::Byte _padding1[0x10];
	::System::Object* LINOEAHLFOM; // 0x30

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDACPOHLKJL_JAAEJCJJDNB_EXECUTE_OFFSET))(this);
	}
};
