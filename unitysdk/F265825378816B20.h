#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class SphereCollider; }

#define F265825378816B20_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x3843820)
#define F265825378816B20_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3843640)
#define F265825378816B20__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int F265825378816B20_TypeDefinitionIndex = 17950;

class F265825378816B20 : public ::System::Object
{
public:
	::UnityEngine::SphereCollider* BD8273AB04C4B760; // 0x10

	::System::Void _ctor(::UnityEngine::SphereCollider* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SphereCollider*))((::PBYTE)hIl2Cpp + F265825378816B20__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F265825378816B20_B201DD09DDF57516_OFFSET))(this);
	}

	::System::Boolean E83F6F358E73B362(::F265825378816B20* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::F265825378816B20*))((::PBYTE)hIl2Cpp + F265825378816B20_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}
};
