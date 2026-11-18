#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_PAYINFOPARAM_EXPEND_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x724100)

namespace MoleMole
{
	inline static constexpr unsigned int PayInfoParam_Expend_TypeDefinitionIndex = 90956;

	struct alignas(4) PayInfoParam_Expend
	{
		::System::UInt32 tab_id; // 0x10

		::System::String* MKEFBLKCNKE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PAYINFOPARAM_EXPEND_MKEFBLKCNKE_OFFSET))(this);
		}
	};
}
