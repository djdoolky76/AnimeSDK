#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define A958BCFBBED70564_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x38435F0)
#define A958BCFBBED70564_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x38433F0)
#define A958BCFBBED70564__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int A958BCFBBED70564_TypeDefinitionIndex = 17954;

class A958BCFBBED70564 : public ::System::Object
{
public:
	::UnityEngine::Material* BD8273AB04C4B760; // 0x10

	::System::Boolean E83F6F358E73B362(::A958BCFBBED70564* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::A958BCFBBED70564*))((::PBYTE)hIl2Cpp + A958BCFBBED70564_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor(::UnityEngine::Material* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + A958BCFBBED70564__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A958BCFBBED70564_B201DD09DDF57516_OFFSET))(this);
	}
};
