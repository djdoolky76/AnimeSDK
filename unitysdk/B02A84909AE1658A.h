#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Collider; }

#define B02A84909AE1658A_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x3807490)
#define B02A84909AE1658A_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3806E80)
#define B02A84909AE1658A__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int B02A84909AE1658A_TypeDefinitionIndex = 17843;

class B02A84909AE1658A : public ::System::Object
{
public:
	::UnityEngine::Collider* BD8273AB04C4B760; // 0x10

	::System::Void _ctor(::UnityEngine::Collider* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + B02A84909AE1658A__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B02A84909AE1658A_B201DD09DDF57516_OFFSET))(this);
	}

	::System::Boolean E83F6F358E73B362(::B02A84909AE1658A* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::B02A84909AE1658A*))((::PBYTE)hIl2Cpp + B02A84909AE1658A_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}
};
