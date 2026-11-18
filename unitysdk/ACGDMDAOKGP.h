#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACGDMDAOKGP_OLIFJENGDOK.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define ACGDMDAOKGP_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7BFB60)
#define ACGDMDAOKGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7BFB50)

inline static constexpr unsigned int ACGDMDAOKGP_TypeDefinitionIndex = 70092;

struct alignas(8) ACGDMDAOKGP
{
	::System::Object* GPIOJBLKFAJ; // 0x10
	::ACGDMDAOKGP_OLIFJENGDOK EPMNNELBGFG; // 0x18

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGDMDAOKGP_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGDMDAOKGP_DPIHOJBBGLA_OFFSET))(this);
	}
};
