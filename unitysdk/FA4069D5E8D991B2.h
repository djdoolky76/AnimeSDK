#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MeshCollider; }

#define FA4069D5E8D991B2_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x3807BE0)
#define FA4069D5E8D991B2_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3807AE0)
#define FA4069D5E8D991B2__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int FA4069D5E8D991B2_TypeDefinitionIndex = 17862;

class FA4069D5E8D991B2 : public ::System::Object
{
public:
	::UnityEngine::MeshCollider* BD8273AB04C4B760; // 0x10

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FA4069D5E8D991B2_B201DD09DDF57516_OFFSET))(this);
	}

	::System::Boolean E83F6F358E73B362(::FA4069D5E8D991B2* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::FA4069D5E8D991B2*))((::PBYTE)hIl2Cpp + FA4069D5E8D991B2_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor(::UnityEngine::MeshCollider* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshCollider*))((::PBYTE)hIl2Cpp + FA4069D5E8D991B2__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}
};
