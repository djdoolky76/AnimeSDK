#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define B41A0238108684E4_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x38977A0)
#define B41A0238108684E4_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x38975B0)
#define B41A0238108684E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int B41A0238108684E4_TypeDefinitionIndex = 18104;

class B41A0238108684E4 : public ::System::Object
{
public:
	::UnityEngine::Transform* BD8273AB04C4B760; // 0x10

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B41A0238108684E4_B201DD09DDF57516_OFFSET))(this);
	}

	::System::Void _ctor(::UnityEngine::Transform* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + B41A0238108684E4__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}

	::System::Boolean E83F6F358E73B362(::B41A0238108684E4* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::B41A0238108684E4*))((::PBYTE)hIl2Cpp + B41A0238108684E4_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}
};
