#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CapsuleCollider; }

#define ED83200B35791047_B201DD09DDF57516_OFFSET UNITYSDK_OFFSET(0x3806E30)
#define ED83200B35791047_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3806C20)
#define ED83200B35791047__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int ED83200B35791047_TypeDefinitionIndex = 17822;

class ED83200B35791047 : public ::System::Object
{
public:
	::UnityEngine::CapsuleCollider* BD8273AB04C4B760; // 0x10

	::System::Void _ctor(::UnityEngine::CapsuleCollider* BD8273AB04C4B760)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + ED83200B35791047__CTOR_OFFSET))(this, BD8273AB04C4B760);
	}

	::System::Boolean B201DD09DDF57516()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ED83200B35791047_B201DD09DDF57516_OFFSET))(this);
	}

	::System::Boolean E83F6F358E73B362(::ED83200B35791047* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::ED83200B35791047*))((::PBYTE)hIl2Cpp + ED83200B35791047_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}
};
