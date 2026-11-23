#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Terrain; }

#define E0899E7EE5689A05_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x387DFC0)
#define E0899E7EE5689A05_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x387DE60)
#define E0899E7EE5689A05__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int E0899E7EE5689A05_TypeDefinitionIndex = 18065;

class E0899E7EE5689A05 : public ::System::Object
{
public:
	::UnityEngine::Terrain* BD8273AB04C4B760; // 0x10

	::System::Boolean E83F6F358E73B362(::E0899E7EE5689A05* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::E0899E7EE5689A05*))((::PBYTE)hIl2Cpp + E0899E7EE5689A05_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor(::UnityEngine::Terrain* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + E0899E7EE5689A05__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E0899E7EE5689A05_B201DD09DDF57516_OFFSET))(this);
	}
};
