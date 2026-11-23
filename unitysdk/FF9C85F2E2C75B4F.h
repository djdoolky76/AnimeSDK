#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FF9C85F2E2C75B4F__CCTOR_OFFSET UNITYSDK_OFFSET(0x3EF5660)
#define FF9C85F2E2C75B4F__CTOR_OFFSET UNITYSDK_OFFSET(0x3EF56F0)

inline static constexpr unsigned int FF9C85F2E2C75B4F_TypeDefinitionIndex = 15237;

struct alignas(8) FF9C85F2E2C75B4F
{
	static ::FF9C85F2E2C75B4F* StaticGet_B1133612E7321580()
	{
		return (::FF9C85F2E2C75B4F*)Il2CppClass::FromTypeDefinitionIndex(FF9C85F2E2C75B4F_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Boolean ECBB091F9085B7BE; // 0x10
	::System::Byte _padding0[0x7];
	::System::String* BBEB5660B9E173D4; // 0x18

	::System::Void _ctor(::System::String* A7AB1C65BB07DA32, ::System::Boolean FA38878D12F78876)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FF9C85F2E2C75B4F__CTOR_OFFSET))(this, A7AB1C65BB07DA32, FA38878D12F78876);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FF9C85F2E2C75B4F__CCTOR_OFFSET))();
	}
};
