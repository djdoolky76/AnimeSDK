#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBPEMPMEMGK_AHBEGPBHJFO.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Action_1; }

#define MBPEMPMEMGK_HMNKMMCEPIB_OFFSET UNITYSDK_OFFSET(0x748ED0)

inline static constexpr unsigned int MBPEMPMEMGK_TypeDefinitionIndex = 66015;

struct alignas(4) MBPEMPMEMGK
{
	::System::Boolean LCGNHLHPDLE; // 0x10
	::System::Byte _padding0[0x3];
	::MBPEMPMEMGK_AHBEGPBHJFO PKFLDLIJLIL; // 0x14
	::System::Int32 ILEHBBEIKMA; // 0x18

	::System::Void HMNKMMCEPIB(::System::Action_1<::System::Boolean>* CPCOBKCDFIF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MBPEMPMEMGK_HMNKMMCEPIB_OFFSET))(this, CPCOBKCDFIF);
	}
};
