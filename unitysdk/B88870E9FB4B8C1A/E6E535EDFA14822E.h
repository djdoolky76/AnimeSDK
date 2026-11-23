#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define B88870E9FB4B8C1A_E6E535EDFA14822E_A201A76C5CF894D7_OFFSET UNITYSDK_OFFSET(0x16F77C0)
#define B88870E9FB4B8C1A_E6E535EDFA14822E_BA7E4E804C738FE0_OFFSET UNITYSDK_OFFSET(0x1C28010)
#define B88870E9FB4B8C1A_E6E535EDFA14822E__CTOR_OFFSET UNITYSDK_OFFSET(0x276AAD0)

namespace B88870E9FB4B8C1A
{
	inline static constexpr unsigned int E6E535EDFA14822E_TypeDefinitionIndex = 16509;

	class E6E535EDFA14822E : public ::System::Object
	{
	public:
		::System::Boolean E634292F7BE7BB09; // 0x10

		::System::Void BA7E4E804C738FE0(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + B88870E9FB4B8C1A_E6E535EDFA14822E_BA7E4E804C738FE0_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean A201A76C5CF894D7()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B88870E9FB4B8C1A_E6E535EDFA14822E_A201A76C5CF894D7_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B88870E9FB4B8C1A_E6E535EDFA14822E__CTOR_OFFSET))(this);
		}
	};
}
