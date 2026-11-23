#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AD7D660EB6AE8BB3_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3865630)
#define AD7D660EB6AE8BB3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AD7D660EB6AE8BB3_TypeDefinitionIndex = 18015;

class AD7D660EB6AE8BB3 : public ::System::Object
{
public:
	::System::String* E92A0346903CA923; // 0x10
	::System::Single BC9908E67E7B1CE9; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD7D660EB6AE8BB3__CTOR_OFFSET))(this);
	}

	::System::Boolean E83F6F358E73B362(::AD7D660EB6AE8BB3* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::AD7D660EB6AE8BB3*))((::PBYTE)hIl2Cpp + AD7D660EB6AE8BB3_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}
};
