#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class B196ACFA9D2AE729; }

#define FC7DA90993781788_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x3821680)
#define FC7DA90993781788_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3821570)
#define FC7DA90993781788__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int FC7DA90993781788_TypeDefinitionIndex = 17871;

class FC7DA90993781788 : public ::System::Object
{
public:
	::UnityEngine::B196ACFA9D2AE729* BD8273AB04C4B760; // 0x10

	::System::Boolean E83F6F358E73B362(::FC7DA90993781788* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::FC7DA90993781788*))((::PBYTE)hIl2Cpp + FC7DA90993781788_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FC7DA90993781788_B201DD09DDF57516_OFFSET))(this);
	}

	::System::Void _ctor(::UnityEngine::B196ACFA9D2AE729* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::B196ACFA9D2AE729*))((::PBYTE)hIl2Cpp + FC7DA90993781788__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}
};
